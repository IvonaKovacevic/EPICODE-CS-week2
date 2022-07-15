#include <stdio.h>

/*Dichiarazione delle funzioni che verranno implementate di seguito*/
void menu ();
void moltiplica ();
void dividi ();
void ins_string();

/* Funzione principale, all'interno della qualle viene scritto il nostro programma*/
int main () 

{


    char scelta = '\0'; //errore: parentesi graffe 


/* Costrutto do-while: ci serve per non farci uscire dal programma 
in caso sbagliassimo a digitare una delle opzioni date */

    do{
    menu ();
    scanf ("%c", &scelta); // modifica di %d, che sta per intero, in %c che sta per char

    switch (scelta)
    {
        case 'A':
                moltiplica();
                break;
        case 'B':
                dividi();
                break;
        case 'C':
                ins_string();
                break;


 // Default, in caso di digitaione di un  carattere errato
                default:
                printf("Ritenta\n");
                break;
    }
/* In caso l'utente scelga l'opzione non data */
                }while(scelta != 'A' && scelta != 'B' && scelta != 'C'); 

return 0;

}

//Implementata funzione menu()
void menu ()
{
    printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
    printf ("Come posso aiutarti?\n");
    printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}

/*Cambiato tutto da int a float per rendere piu efficace le operazioni
e da %d a %f per far si che l-input possa essere anche un valore di tipo
float e non solo un intero*/

// Implementata funzione moltiplica()
void  moltiplica ()
{
    float  a,b = 0;
    printf ("Inserisci il primo molitplicatore:\n");
    scanf ("%f", &a);

    // Aggiunto printf per inserire il secondo numero da moltiplicare (questione estetica)
    printf ("Inserisci il secondo moltiplicatore\n");
    scanf ("%f", &b);

    float prodotto =(float) a * b;

    printf ("Il prodotto tra %f e %f e': %f", a,b,prodotto);
}

// Implementata funzione dividi()
void dividi ()
{
        float  a,b = 0;
        printf ("Inserisci il numeratore:");
        scanf ("%f", &a);
        printf ("Inserisci il denumeratore:");
        scanf ("%f", &b);

        float divisione =(float) a / b;
        //  Cambiato da % a /, per fare la divisione - aggiunto float, dato che la divisione potrebbe darmi un num diverso da un intero
        printf ("La divisione tra %f e %f e': %f", a,b,divisione);
        // Cambio da %d a %f, dato che il risultato potrebbe essere float 
}



void ins_string () 

{
        char stringa[10];// La stringa puo contenere 9 caratteri e l'ultimo di terminazione 
        printf ("Inserisci la stringa:");
        scanf ("%s", &stringa);
}

