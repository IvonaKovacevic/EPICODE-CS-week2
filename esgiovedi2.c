#include <stdio.h>

int main()

{

/* Dichiarazione variabili */

int a;
int b;
float mediaAritmetica;


/* Istruzione per utente */
printf("Inserisci il primo numero:\n");

scanf("%d",&a);

printf("Inserisci il secondo numero:\n");

scanf("%d",&b);

/* Media */
mediaAritmetica =(float)(a+b)/2;


/* Visualizza risultato */
printf("La media: %f\n",mediaAritmetica);

}
