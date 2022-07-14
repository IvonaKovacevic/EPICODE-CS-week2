#include <stdio.h>
#include <stdlib.h>

int main(void)
{

/*Dichiara variabile*/
int num;

/* Inserisci numero */
printf("Inserisci numero desiderato:");
scanf("%d",&num);

/* If else statement - controlla se numero positivo o equivale a 0 */

if (num >= 0)

             {
             printf("Il numero e positivo o nullo");
             }

else
       {
       printf("Il numero e negativo");
       }


       exit(0);


}

