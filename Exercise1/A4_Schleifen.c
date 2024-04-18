#include <stdio.h>
#include <stdlib.h>
/*
a) Implementieren Sie ein Programm, das eine Zahl einliest und diese Anzahl an Sternchen (Asterisk,
*) auf der Konsole ausgibt.
*/
int zahl_ins_sterne()
{
    int anzahlSternchen = 0;
    printf("Wie viele Sternchen haetten Sie gerne?\n");
    printf("Bitte geben Sie die Anzahl ein: ");
    scanf("%d", &anzahlSternchen);
    printf("\n\nBitteschoen, Ihre %d Sternchen:\n\n", anzahlSternchen);
    for (int i = 0; i < anzahlSternchen; i++) {
        printf("*");
    }
    // Ein abschließender Zeilenumbruch, der Schönheit wegen.
    printf("\n");
    return 0;
}

/*
b)
Lesen Sie in einem Programm eine Zahl ein. 
Berechnen Sie mit einer Schleife die Quadratzahl (http://de.wikipedia.org/wiki/Quadratzahl) dieser Zahl. 
Natürlich sollen Sie hier nicht einfach n·n ausgeben, also nicht multiplizieren. :-) 
Überlegen Sie daher, wie Sie eine bestimmte der Ihnen nun bekannten Schleifenarten geschickt mit der Addition2 kombinieren können.
*/
int quadratzahl()
{
    int n, zaehlerUngeradeZahlen = 0, quadrat = 0, i = 0;
    printf("Bitte geben Sie die zu quadrierende Zahl ein: ");
    scanf("%d", &n);
    
    // Sicherstellen, dass wir auch negative Zahlen quadrieren koennen.
    // Danke an Benjamin Lagershausen-Kessler fuer den Hinweis.
    if (n < 0) {
		n *= -1;
	}

    // Alternative 1:
    // Addieren der ersten n ungeraden Zahlen.
    while (zaehlerUngeradeZahlen < n) {
        i++;
        if (i % 2 != 0) {
            quadrat += i;
            printf("i: %d, quadrat: %d\n", i, quadrat);
            zaehlerUngeradeZahlen++;
        }
    }

    // Alternative 2:
    // n-maliges addieren der Zahl n.
    /*for (i = 0; i < n; i++) {
        quadrat = quadrat + n; // quadrat += n;
    }*/

    printf("Das Quadrat von %d ist: %d\n", n, quadrat);

    return 0;
}


/*
c) !!!Diese Aufgabe ist nur für Interessierte und muss nicht zur Modulzielerreichung bearbeitet
werden!!! Lesen Sie in einem Programm eine Zahl ein. Berechnen Sie mit einer Schleife
die Fakultät dieser Zahl.
*/

/*
d) Erweitern Sie Aufgabe 3d derart, dass Sie ohne Programmneustart immer wieder Berechnungen
eingeben können.
*/

/*
*/






int main(){
    //zahl_ins_sterne();
    quadratzahl();
}


