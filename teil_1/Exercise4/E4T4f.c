#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define SIZE 20

int main() {
    int array1[SIZE];
    // Zufallszahlengenerator initialisieren.
    srand(time(NULL));

    for (int i = 0; i < 20; i++) {
        // Wir wollen keine Zufallszahl, für die gilt >= 10, deswegen %10!
        array1[i] = rand() % 10;
    }

    int array2[SIZE];
    // Wir kopieren SIZE*sizeof(int) Byte zum Ziel.
    memcpy(array2, array1, SIZE * sizeof(int));

    for (int i = 0; i < 20; i++) {
        printf("array1[%d] = %d   array2[%d] = %d\n", i, array1[i], i, array2[i]);
    }

    return 0;
}
