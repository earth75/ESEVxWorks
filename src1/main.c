/* * * * * * * * *   src1/main.c   * * * * * * * * * *\
       This is the exec from the 2nd question
        Tache2 waits for Tache1 with a sem
  Tache1 gives the sem and then delays itself for 1s
\* * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <stdio.h>
#include <taskLib.h>
#include <semLib.h>

void tache1(int);
void tache2(void);
SEM_ID synch;

void Tcreee(void)
{
	int taskID1, taskID2, tdodo=100;
	
	synch = semBCreate(SEM_Q_PRIORITY, SEM_FULL);
	
	taskID2 = taskSpawn("tache2", 100, 0 , 5000, (FUNCPTR)&tache2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		if (taskID2!=ERROR)
			printf("Tache2 créée\n");
		else
			printf("ERREUR2\n");
		
	taskID1 = taskSpawn("tache1", 101, 0 , 5000, (FUNCPTR)&tache1, tdodo, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	if (taskID1!=ERROR)
		printf("Tache1 créée\n");
	else
		printf("ERREUR1\n");
	
	taskDelete(0);
}

void tache2(void)
{
	while(1)
	{
		semTake(synch, WAIT_FOREVER);
		printf("DODO2\n");
	}
}

void tache1(int tdodo)
{
	while(1)
	{
		printf("TACHE2!\n");
		semGive(synch);
		printf("DODO1\n");
		taskDelay(tdodo);
	}	
}

