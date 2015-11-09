#include <vxWorks.h>
#include <stdio.h>
#include <taskLib.h>
#include <logLib.h>

#define MOI        0
#define NOM_TACHE1 "t1"
#define NOM_TACHE2 "t2"

#define deltaPriorite1 +2 
#define deltaPriorite2 +1 //tache 1 prioritaire
#define taillePile 1000
#define optionsTache 0

SEM_ID mut;
int var1,var2,compteur;


void codeTache1 (void)
{
	while (TRUE)
	{
		semTake(mut, WAIT_FOREVER);
		var1=compteur;
		var2=compteur;
		compteur++;
		semGive(mut);
    }
}

void codeTache2 (void)
{
	while (TRUE)
    {
		semTake(mut, WAIT_FOREVER);
		if (!(var1==var2)) {
		taskDelay(1);
		semGive(mut);
		printf("var1 = %d  var2=%d\n",var1,var2);
		}
		else semGive(mut);
    }
}

/*-----------------------------------------------------------------------------
 Code de la tache initiale
-----------------------------------------------------------------------------*/
void init (void)
{
int tache1ID, tache2ID, priorite;
mut = semMCreate(SEM_Q_PRIORITY, SEM_FULL);
/* initialisation des variables globales */
var1=0;
var2=0;
compteur=0;

/* Recherche de la priorite de la tache courante
   Pas de test d'erreur (TID forcement valide)
----------------------------------------------*/
taskPriorityGet (MOI,        	/* task ID                       */
                 &priorite); 	/* priorite de la tache courante */

/* Creation de la premiere tache
------------------------------*/
tache1ID = taskSpawn(NOM_TACHE1,              	/* nom de la tache                */
                     priorite+deltaPriorite1, 	/* priorite                       */
                     optionsTache,            	/* options                        */
                     taillePile,              	/* taille de la pile en octets
                                                 (y compris le nom de la tache) */
                     (FUNCPTR) &codeTache1,    	/* point d'entree                 */
                     0,                  		/* 1er argument non utilise  */
                     0,0,0,0,0,0,0,0,0);      	/* 9 arguments non utilises       */ 

printf("Tache 1 creee - TID = %d\n", tache1ID);

/* Creation de la seconde tache
-----------------------------*/
tache2ID = taskSpawn(NOM_TACHE2,              	/* nom de la tache                */
                     priorite+deltaPriorite2, 	/* priorite                       */
                     optionsTache,            	/* options                        */
                     taillePile,              	/* taille de la pile en octets
                                                 (y compris le nom de la tache) */
                     (FUNCPTR) &codeTache2,    	/* point d'entree                 */
                     0,                  		/* 1er argumentnon utilisee  */
                     0,0,0,0,0,0,0,0,0);      	/* 9 arguments non utilises       */ 

printf("Tache 2 creee - TID = %d\n", tache2ID);

/* destruction de la tache d'initialisation */
taskDelete (MOI);

} /* fin de tacheInit() */

