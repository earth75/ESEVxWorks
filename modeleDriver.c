#include <vxWorks.h>
#include <ioLib.h>
#include <iosLib.h>
#include <errnoLib.h>
#include <semLib.h>
#include <taskLib.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int numDriver = ERROR;

typedef struct	
{
  DEV_HDR devHdr;

} axeZDevHdr;

axeZDevHdr axeZDev;

// fonctions du driver
int axeZOpen(axeZDevHdr * axeZPtr, char * name, int mode)
{
	return (int)axeZPtr;
}

int axeZClose(axeZDevHdr * axeZPtr)
{
	return OK;
}

int axeZRead(axeZDevHdr * axeZPtr, char * destPtr, int nbrOctetsMax)
{
	return nbrOctetsMax;
}

int axeZWrite(axeZDevHdr * axeZPtr, char * buffer, int nbrOctets)
{ 
	return ERROR;
}

int axeZIoctl(axeZDevHdr * axeZPtr, int fonction, int arg)
{
	return OK;
}

void initDriver(void)
{
	int erreur;
	
	// Arguments à compléter !
	numDriver=iosDrvInstall();
	if (numDriver==ERROR) printf("Erreur installation driver\n");
	
	// Arguments à compléter !
	erreur=iosDevAdd();
	if (erreur==ERROR) printf("Erreur creation device\n");
	
}



