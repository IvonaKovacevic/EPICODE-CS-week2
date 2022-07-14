#include <stdio.h>


int main()

{

int i;
int k;
int x;
int y;


printf("Inserisci valore da incrementare i");
scanf("%d", &i);

printf("Inserisci valore da decrementare k");
scanf("%d",&k);

x=i++;
printf("i Incrementato %d\n",i);

y=k--;
printf("Decrementa valore %d\n",k);



}

