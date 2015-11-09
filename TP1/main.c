
#include <stdio.h>
#include <string.h>
#include <taskLib.h>
#include <semLib.h>
#include <iolib.h>
#include "adresses.h"
//#include <msgQLib.h>

STATUS erreur;
void ITtimer(void);
void ITI2C(void);
short readI2C(void);
SEM_ID TIMsynch, I2Csynch;
int fd, accD;
float G;


void init(void)
{
	//creation sem
	TIMsynch = semBCreate(SEM_Q_PRIORITY,SEM_EMPTY);
	
	//init clk
	*GPT_IR = 0x1;
	*GPT_CR = 0x1c3;
	*GPT_PR = 0x0;
	*GPT_OCR1 = 12000000;


	//intEnable
	erreur = intConnect(87, (VOIDFUNCPTR)ITtimer, 0);
	if (erreur !=OK)
	{
		printf("ERREUR intConnect\n");
		taskDelete(0);
	}
	erreur = intEnable(87);
	if (erreur != OK)
	{
		printf("Erreur intEnable\n");
		taskDelete(0);
	}
	//initialisation de l'acc�l�ro
	//axe Z
	accD = open("/axeX", O_RDONLY, 0);
	if (accD == -1) {printf("error on open\n"); return;}
	else printf("InitAcc OK\n");
	
	//initialisation du port s�rie 2
	// 9600baud
	//8bits de don�e
	//1 bit de stop
	//pas de controle
	
	fd = open("/tyCo/1", O_RDWR, 0x777);
	if (fd == -1) {printf("error on open\n"); return;}
	else {ioctl(fd, FIOBAUDRATE, 115200);
	printf("Init OK\n");
	return;}
}

void GPT(void)
{
	char bufferX [10], bufferY [10], bufferZ [10], buffer[1000];
	float varX, varY, varZ;
	int precision = 5;
	init();
	
	while(1)
	{
		semTake(TIMsynch, WAIT_FOREVER);				//synch with timer (1Hz)
		ioctl(accD, 0, 'X');
		read(accD, bufferX, 10);
		ioctl(accD, 0, 'Y');
		read(accD, bufferY, 10);
		ioctl(accD, 0, 'Z');
		read(accD, bufferZ, 10);
		varX = (float) atoi(bufferX);
		sprintf(bufferX,"%1.*f",precision, varX/16384);	//precision = nb de chiffres apres la virgule
		varY = (float) atoi(bufferY);
		sprintf(bufferY,"%1.*f",precision, varY/16384);	//precision = nb de chiffres apres la virgule
		varZ = (float) atoi(bufferZ);
		sprintf(bufferZ,"%1.*f",precision, varZ/16384);	//precision = nb de chiffres apres la virgule
		strcpy(buffer, "(");
		strcat(buffer, bufferX);
		strcat(buffer, ", ");
		strcat(buffer,  bufferY);
		strcat(buffer,", ");
		strcat(buffer,bufferZ);
		strcat(buffer, ")\n\r");
		write(fd, buffer,strlen(buffer));
	}
}


void ITtimer(void)
{
	*GPT_SR = 0x0001;					//W1C the int
	semGive(TIMsynch);
}



