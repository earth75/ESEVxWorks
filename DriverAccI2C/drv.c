#include <vxWorks.h>
#include <ioLib.h>
#include <iosLib.h>
#include <errnoLib.h>
#include <semLib.h>
#include <taskLib.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "adresses.h"

int numDriver = ERROR;
int erreur;

typedef enum{X, Y, Z} axe;

typedef struct	
{
  DEV_HDR devHdr;
  SEM_ID I2Csynch;
  SEM_ID AccessLock;
  axe mode; //[X, Y, Z]
} axeDevHdr;


void ITI2C(axeDevHdr * axePtr)
{
	*I2C3_I2SR = 0;					//clear the IIF bit
	semGive(axePtr->I2Csynch);
}

// fonctions du driver
int axeOpen(axeDevHdr * axePtr, char * name, int mode)
{
	*I2C3_I2CR = 0xC0;					//IEN et IIen set to 1
	while ((*I2C3_I2SR & 0x20) == 0x20);//attente de IBB � 0
	*I2C3_I2CR = 0xF0;					//MSTA et MTX � 1
	while ((*I2C3_I2SR & 0x20) == 0);	//attente de IBB � 1
	*I2C3_I2DR = 0x32;					//�criture dans DR de 50 (SAD + W)
	semTake(axePtr->I2Csynch, WAIT_FOREVER);  // (SAK)
	*I2C3_I2DR = 0x20;					//ecriture de 32  (SUB)
	semTake(axePtr->I2Csynch, WAIT_FOREVER);
	
	//Autorisation de tous les axes
	*I2C3_I2DR = 0x57;	

	semTake(axePtr->I2Csynch, WAIT_FOREVER);
	*I2C3_I2CR = 0xC0;					//MSTA et MTX � 0
	while ((*I2C3_I2SR & 0x20) == 0x20);//attente de IBB � 0
	
	switch(*name){
			case 'X': 	axePtr->mode = X;
						break;
			case 'Y': 	axePtr->mode = Y;
						break;
			case 'Z': 	axePtr->mode = Z;
						break;
			default:	break;
		}	
				
	return (int)axePtr;
}

int axeClose(axeDevHdr * axePtr)
{
	return OK;
}

int axeRead(axeDevHdr * axePtr, char * destPtr, int nbrOctetsMax)
{
	char val1,val2,val3;
	semTake(axePtr->AccessLock, WAIT_FOREVER);
	
	*I2C3_I2CR = 0xF0;					//IEN, IIEN MSTA et MTX � 1
	while ((*I2C3_I2SR & 0x20) == 0);
	*I2C3_I2DR = 0x32;					//50
	semTake(axePtr->I2Csynch, WAIT_FOREVER);	//wait for end of I2C cycle
	
	
	switch(axePtr->mode)
	{
	case Z:
		//lecture de l'axe Z
		*I2C3_I2DR = 0xAC;					//172 (Z)
		break;
	case X:
		//lecture de l'axe X
		*I2C3_I2DR = 0xA8;					//X
		break;
	case Y:
		//lecture de l'axe Y
		*I2C3_I2DR = 0xAA;					//Y
		break;
	default: return ERROR;
	}
	
	semTake(axePtr->I2Csynch, WAIT_FOREVER);
	*I2C3_I2CR = 0xF4;					//RSTA a 1
	*I2C3_I2DR = 0x33;					//51
	semTake(axePtr->I2Csynch, WAIT_FOREVER);
	*I2C3_I2CR = 0xE0;					//MTX et RSTA � 0
	val1=*I2C3_I2DR;					// lecture de DR qui sert � lancer le transfert
	semTake(axePtr->I2Csynch, WAIT_FOREVER);
	*I2C3_I2CR = 0xE8;					//TXAK � 1
	val2=*I2C3_I2DR;
	semTake(axePtr->I2Csynch, WAIT_FOREVER);
	*I2C3_I2CR = 0xC0;					//IEN et IIEN � 1 (le reste � 0)
	while ((*I2C3_I2SR & 0x20) == 0x20);
	val3=*I2C3_I2DR;
	sprintf(destPtr,"%d", (short)((val3<<8)+val2)); 
	semGive(axePtr->AccessLock);
	return 2;
}

int axeWrite(axeDevHdr * axePtr, char * buffer, int nbrOctets)
{ 
	return ERROR;
}

int axeIoctl(axeDevHdr * axePtr, int fonction, int arg)
{
	switch(arg){
		case 'X': 	axePtr->mode = X;
					break;
		case 'Y': 	axePtr->mode = Y;
					break;
		case 'Z': 	axePtr->mode = Z;
					break;
		default:	return ERROR;
	}
	
	return OK;
}

int initDriver(void)
{
	int erreur;
	axeDevHdr* axePtr = malloc(sizeof(axeDevHdr));
	
	axePtr->I2Csynch = semBCreate(SEM_Q_PRIORITY,SEM_EMPTY);
	axePtr->AccessLock = semMCreate(SEM_Q_PRIORITY);
	
	*IOMUXC1_I2C=0x16;
	*IOMUXC2_I2C=0x16;
	*IOMUXC3_I2C=0x1B8B1;
	*IOMUXC4_I2C=0x1B8B1;
	*IOMUXC5_I2C=0x2;
	*IOMUXC6_I2C=0x2;
	
	erreur = intConnect(70, (VOIDFUNCPTR)ITI2C, axePtr);
	if (erreur !=OK)
	{
		printf("ERREUR intConnect\n");
		taskDelete(0);
	}
	erreur = intEnable(70);
	if (erreur != OK)
	{
		printf("Erreur intEnable\n");
		taskDelete(0);
	}

	numDriver=iosDrvInstall(NULL, (FUNCPTR)axeClose, (FUNCPTR)axeOpen, (FUNCPTR)axeClose, (FUNCPTR)axeRead, NULL, (FUNCPTR)axeIoctl);
	if (numDriver==ERROR) printf("Erreur installation driver\n");
	
	erreur=iosDevAdd(axePtr, "/axe", numDriver);
	if (erreur==ERROR) printf("Erreur creation device\n");
	
	return 0;
}
