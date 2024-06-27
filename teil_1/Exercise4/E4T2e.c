#include <stdio.h>
#include <stdlib.h>

#include "geometry.h"

int main()
{
    printf("Geben Sie die Laenge und Breite ein: ");
    int breite;
    int laenge;
    scanf("%d %d", &breite, &laenge);
    printf("Die Flaeche betraegt: %d", flaechenberechnung(breite, laenge));
    return 0;
}
