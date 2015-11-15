/* * * * * * * * *  partie 1-3.c   * * * * * * * * * *\
  	     This is the 1-3 exec file.
    A task increments two counters at the same time
    Another task prints the value of the counters
     In order to avoid desynch between the two
 a mutex is used to set a critical section, preventing
    printing task to disrupt the incrementation
\* * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <vxWorks.h>
#include <stdio.h>
#include <taskLib.h>
#include <logLib.h>

#define MOI        0
#define NOM_TACHE1 "t1"
#define NOM_TACHE2 "t2"

#define deltaPriorite1 +2 
#define deltaPriorite2 +1            //tache1 has higher priority than tache2
#define taillePile 1000
#define optionsTache 0

SEM_ID mut;
int var1,var2,compteur;


void codeTache1 (void)
{
	while (TRUE)
	{
		semTake(mut, WAIT_FOREVER); 	//Start of critical area
		var1=compteur;
		var2=compteur;
		compteur++;
		semGive(mut);			//End of critical area
    }
}

void codeTache2 (void)
{
	while (TRUE)
    {
		semTake(mut, WAIT_FOREVER);	//Start
		if (!(var1==var2)) {
		taskDelay(1);
		semGive(mut);			//End
		printf("var1 = %d  var2=%d\n",var1,var2);
		}
		else semGive(mut);		//End
    }
}

/*-----------------------------------------------------------------------------
 			Initial task's code
-----------------------------------------------------------------------------*/

void init (void)
{
int tache1ID, tache2ID, priorite;
mut = semMCreate(SEM_Q_PRIORITY, SEM_FULL);
/* initialisation of global variables */
var1=0;
var2=0;
compteur=0;

/* Search the priority of the current task
   No error test (TID necessarily valid)
----------------------------------------------*/
taskPriorityGet (MOI,        	/* task ID                 */
                 &priorite); 	/* current task's priority */

/* First task's creation
------------------------------*/
tache1ID = taskSpawn(NOM_TACHE1,              	/* name of the task		*/
                     priorite+deltaPriorite1, 	/* priority			*/
                     optionsTache,            	/* options			*/
                     taillePile,              	/* stack's size in bytes
                                                (including task's name)		*/
                     (FUNCPTR) &codeTache1,    	/* entry point			*/
                     0,                  	/* first argument unused	*/
                     0,0,0,0,0,0,0,0,0);      	/* 9 arguments unused		*/ 

printf("Tache 1 creee - TID = %d\n", tache1ID);

/* Second task's creation
-----------------------------*/

tache2ID = taskSpawn(NOM_TACHE2,              	/* name of the task             */
                     priorite+deltaPriorite2, 	/* priority               	*/
                     optionsTache,            	/* options                      */
                     taillePile,              	/* task's size in bytes
                                                (including task's name) 	*/
                     (FUNCPTR) &codeTache2,    	/* entry point                 	*/
                     0,                  	/* first argument unused 	*/
                     0,0,0,0,0,0,0,0,0);      	/* 9 arguments unused		*/ 

printf("Tache 2 creee - TID = %d\n", tache2ID);

/* deletion of the initial task init() */
taskDelete (MOI);

}

