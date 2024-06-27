#include <stdio.h>
#include <stdlib.h>

#define ABSOLUTBETRAG(zahl) zahl < 0 ? zahl * (-1) : zahl

int main()
{
   int zahl;
   printf("Lesen Sie bitte eine positive oder negative Zahl ein: ");
   scanf("%d", &zahl);
   printf("Der Absolutbetrag betraegt: %d", ABSOLUTBETRAG(zahl));


}
