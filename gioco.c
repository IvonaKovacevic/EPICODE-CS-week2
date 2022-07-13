#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int  scelta;
    char utente[21];
    int conta=0, x=0, y=0, z=0;


    printf("\nBenvenuti al Quiz\n");
    printf("\nIndovina la risposta giusta:\n");

    do
    {
    printf("\nSeleziona 1 per iniziare\n");
    printf("\nSekeziona 2 per uscire\n");

    scanf("%d",&scelta);


    switch(scelta)
   {
        case 1:
        printf("\nSegli nome utente:\n");
        scanf("%s",&utente);

        printf("\nCapitale italiana\n");
        printf("\n1)Parigi\n");
        printf("\n2)Londra\n");
        printf("\n3)Roma\n");
        scanf("%d", &x);
        if(x==2)
        {
             conta++;
        } 
        printf("\n Il punteggio di %s e\' %d \n", utente, conta);
   }
   }
    while(scelta==1);
return 0;
}

