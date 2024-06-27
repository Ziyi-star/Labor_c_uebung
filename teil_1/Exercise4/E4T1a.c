#include <stdio.h>
#include <stdlib.h>

/*

Variante 1 mit globaler Variable (SCHLECHTE Lösung!)

int zaehler = 0;

void inkrement() {
    zaehler++;
    printf("Der Zaehlerstand ist jetzt: %d\n", zaehler);
}

int main() {
    for (int i = 0; i < 10; i++) {
        inkrement();
    }
    return 0;
}

*/

void inkrement() {
    static int zaehler = 0;
    zaehler++;
    printf("Der Zaehlerstand ist jetzt: %d\n", zaehler);
}

int main() {
    for (int i = 0; i < 10; i++) {
        inkrement();
    }
    return 0;
}
