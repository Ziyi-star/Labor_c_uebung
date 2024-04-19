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
        //ungerade Zahl
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
werden!!! 
Lesen Sie in einem Programm eine Zahl ein. Berechnen Sie mit einer Schleife die Fakultät dieser Zahl.
*/
int fakultaet()
{
    int n, fakultaet = 1;
    printf("Bitte geben Sie die Zahl ein, deren Fakultaet berechnet werden soll: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        fakultaet *= i;
    }
    printf("Die Fakultaet von %d (also %d!) ist: %d\n", n, n, fakultaet);
    return 0;
}


/*
d) Erweitern Sie Aufgabe 3d derart, dass Sie ohne Programmneustart immer wieder Berechnungen
eingeben können.
*/
int calculator_allways()
{
    float operand1, operand2, result;
    int fehler = 0;
    char operator;
    while (1) {
        printf("Bitte geben Sie den zu berechnenden Ausdruck ein: ");
        scanf("%f %c %f", &operand1, &operator, &operand2);

        if (operator == '+') {
            result = operand1 + operand2;
        } else if (operator == '-') {
            result = operand1 - operand2;
        } else if (operator == '*') {
            result = operand1 * operand2;
        } else if (operator == '/') {
            if (operand2 == 0) {
                printf("Fehler! Division durch 0!\n");
                fehler = 1;
            } else {
                result = operand1 / operand2;
            }
        //
        } else {
            printf("Bitte geben Sie den Ausdruck richtig ein!\n");
            fehler = 1;
        }
        // in if schleife braucht man 1, deshalb fehler ist 0, falls fehler = 1, dann in oben else Schleife
        if (!fehler) {
            printf("%f %c %f = %F\n", operand1, operator, operand2, result);
        }
    }
    return 0;
}


/*
e) !!!Diese Aufgabe ist nur für Interessierte und muss nicht zur Modulzielerreichung bearbeitet werden!!! 
Implementieren Sie ein Programm, welches eine Zahl n einliest und entscheidet,
ob diese prim ist. 
Informationen dazu, wie man das tun kann, finden Sie beispielsweise unter http://de.wikipedia.org/wiki/Primzahltest. 
Es genügt, wenn sie die Probedivision (vgl. verlinkter Artikel) implementieren und alle Zahlen bis zur eingegebenen Zahl n testen. 
Sollte jemand von Ihnen schon etwas mehr Erfahrung in C haben, so kann gerne die math.h genutzt werden und die Optimierung (Probedivision nur bis zum Wert sqrt(n), also bis
√n) implementiert werden.
Vielleicht fällt Ihnen auch eine geschickte Lösung zur Optimierung ohne die Nutzung der math.h ein?
*/


int main(){
    //zahl_ins_sterne();
    //quadratzahl();
    //fakultaet();
    //calculator_allways();
}


