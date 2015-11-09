#include <stdio.h>
#include <taskLib.h>
//#include <semLib.h>
#include "adresses.h"
#include <msgQLib.h>

void tache1(int);
void tache2(void);
#define MESSAGE "3iw"
MSG_Q_ID mailBox;
STATUS erreur;

int cpt = 0;
void ITserver(void);
void tacheSynch(void);

void init(void)
{
	
	int tacheSynchID;
	
	mailBox = msgQCreate( 2, 4, MSG_Q_FIFO);
	if (mailBox!=NULL)
		printf("Boite aux lettres créée\n");
	else
		printf("ERREUR\n");

	*GPT_IR = 0x1;
	*GPT_CR = 0x1c3;
	*GPT_PR = 0x0;
	*GPT_OCR1 = 24000000;



	// Initialisation des GPIO pour la broche GPIO9
	*IOMUXC1_GPIO9=0x05;
	*IOMUXC2_GPIO9=0x1B0B0;

	
	erreur = intConnect(87, (VOIDFUNCPTR)ITserver, 0);
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
	
	
	tacheSynchID = taskSpawn(tacheSynch, 100, 0, 5000, (FUNCPTR)tacheSynch, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	
	taskDelete(0);
}


void ITserver(void)
{
	cpt++;
	*GPT_SR = 0x0001;
	msgQSend(mailBox, (char*)&cpt, sizeof(cpt), NO_WAIT, MSG_PRI_NORMAL);
}

void tacheSynch(void)
{	
	int buf = 0;
	while(1)
	{
		msgQReceive(mailBox, (char*)&buf, 4, WAIT_FOREVER);
		printf("time : %d\n", buf);
	}
}
