#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 10

/*
a) Legen Sie eine Integer-Variable an. Lesen Sie in diese einen Wert ein. Geben Sie anschließend Wert
und Adresse der Variable aus!*/

int einlegen_int()
{
    int x;
    printf("Bitte geben Sie einen Wert ein: ");
    scanf("%d", &x);
    printf("Der Wert der Variable ist: %d\n", x);
    //Adresse von eine int
    printf("Die Adresse der Variable im Speicher ist: %p\n", &x);
    return 0;
}

/*
b) Legen Sie ein Integer-Array an. Geben Sie für jedes Element Inhalt und Adresse aus. Was fällt Ihnen
auf?*/

int int_array()
{
    //merken:int hat 4 Byte und andere Typen wie groß, %p Platzhalter für adresse
    int array[] = {23, 42, 5, 7, 12, 3, 0, 9, 112, 31337};
    for (int i = 0; i < sizeof(array)/sizeof(int); i++) {
        printf("Wert: %d \t Adresse: %p\n", array[i], &array[i]);
    }
    printf("\nDie Variablen werden direkt hintereinander im Speicher abgelegt. Bedenken Sie: ein int hat 4 Byte.\n");
    return 0;
}

/*
c) Legen Sie ein mehrdimensionales Integer-Array an. Geben Sie für jedes Element Inhalt und Adresse
aus. Was fällt Ihnen auf?
*/
int mehrdimensionales_int_array()
{
    //merken:Die Variablen werden auch bei mehrdimensionalen Arrays direkt hintereinander im Speicher abgelegt, int hat 4 Byte.
    int array[3][3] = {{23, 42, 5}, {7, 12, 3}, {0, 9, 112}};
    printf("+------------------+------------------+------------------+\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("| %3d (@ %p) ", array[i][j], &array[i][j]);
        }
        printf("|\n+------------------+------------------+------------------+\n");
    }
    printf("\nDie Variablen werden auch bei mehrdimensionalen Arrays direkt hintereinander im Speicher abgelegt. Bedenken Sie: ein int hat 4 Byte.\n");
    return 0;
}

/*d) Lesen Sie ein Integer-Array mit beliebigen Werten ein. Drehen Sie es um, benutzen Sie dazu jedoch
Pointer. Denken Sie daran, dass Sie auch auf Pointer arithmetische Operationen anwenden können.
**Array umdrehen
*/
int array_umdrehen()
{
    int array[ARRAY_SIZE];
    int buffer;

    printf("Bitte geben Sie die Werte des Arrays ein!\n\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d. Wert: ", i + 1);
        scanf("%d", array + i);
    }

    printf("\nUrspruengliches Array:\n[");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d", array[i]);
        if (i < ARRAY_SIZE - 1) {
            printf(", ");
        }
    }
    printf("]\n\n");

    // Wir koennen bei ptrFromLeft das & weg lassen, des array
    // decays wegen.
    int *ptrFromLeft = array;
    // Hier aber nicht, da der Indexoperator einen direkten Wert liefert.
    int *ptrFromRight = &array[ARRAY_SIZE - 1];

    for (int offset = 0; offset < ARRAY_SIZE/2; offset++) {
        buffer = *(ptrFromLeft + offset);
        *(ptrFromLeft + offset) = *(ptrFromRight - offset);
        *(ptrFromRight - offset) = buffer;
    }

    printf("\nUmgedrehtes Array:\n[");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d", array[i]);
        if (i < ARRAY_SIZE - 1) {
            printf(", ");
        }
    }
    printf("]\n\n");

    return 0;
}



int main(){
    //einlegen_int();
    //int_array();
    //mehrdimensionales_int_array();
}