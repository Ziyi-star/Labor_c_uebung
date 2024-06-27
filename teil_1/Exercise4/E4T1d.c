#include <stdio.h>
#include <stdlib.h>

int primzahltest(int zahl) {
    int primzahl = 1;

    for (int i = 2; i < zahl; i++) {
        if ((zahl % i) == 0) {
            primzahl = 0;
            break;
        }
    }

    return primzahl;
}

int main() {
    const int MAX_NUMBER = 20;
    int zaehler = 0;

    for (int i = 2; i <= MAX_NUMBER; i++) {
        zaehler = zaehler + primzahltest(i);
    }

    printf("Im Bereich von 0 bis %d gibt es %d Primzahlen!\n", MAX_NUMBER, zaehler);

    return 0;
}
