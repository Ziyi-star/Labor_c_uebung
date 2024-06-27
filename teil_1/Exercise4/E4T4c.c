#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void fuellen(int *startwert, int laenge) {
    // Zufallszahlengenerator initialisieren!!
    srand(time(NULL));

    for (int i = 0; i < laenge; i++) {
	    // Eine Zufallszahl ziehen, nachdem der Generator oben initialisiert wurde.
        *(startwert + i) = rand();
    }
}

void ausgeben(int *startwert, int laenge) {
    for (int i = 0; i < laenge; i++) {
        printf("%d. Wert: %d\n", i + 1, *(startwert + i));
    }
}

int main() {
    int array[SIZE];
    fuellen(array, SIZE);
    ausgeben(array, SIZE);
    return 0;
}
