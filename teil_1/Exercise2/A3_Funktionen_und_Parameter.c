#include <stdio.h>
#include <stdlib.h>

/*
a) Das folgende Listing enthält eine Funktion, die eine per Parameter übergebene Zahl negieren und
die negierte Zahl als Rückgabewert zurückliefern soll. Ändern Sie die Funktion derart, dass das geforderte
Verhalten erreicht wird. Achten Sie außerdem darauf, auch einen Wert (der einen korrekten
Typ haben muss) zurück zu geben! Tipp: Sie dürfen Änderungen nur in der negiere()-Funktion
durchführen. Ändern Sie die Signatur und den Funktionsrumpf.
*/

int negiere(int zahl)
{
    // eine Zahl negiert man so: negierteZahl = zahl * -1;
    return zahl * -1;
}

/*
b)Implementieren Sie in einem Programm eine Funktion mit der Signatur void teilbareZahlen(int
n, int m). Diese Funktion soll alle durch n teilbaren Zahlen von 0 bis einschließlich m ausgeben.
Rufen Sie diese Funktion aus der main()-Funktion heraus auf.
*/
void teilbareZahlen(int n, int m) {
    for (int i = 0; i <= m; i++) {
        if (i % n == 0) {
            printf("%d\n", i);
        }
    }
}



int main()
{
    int zahl = 42;
    printf("Die Zahl %d ist negiert : %d", zahl, negiere(zahl));
    return 0;
}
