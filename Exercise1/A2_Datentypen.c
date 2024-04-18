#include <stdio.h>
#include <stdlib.h>

/*
a) Implementieren Sie ein Programm, mit dem Sie die Größe der Ihnen bekannten Datentypen ausgeben.
Nutzen Sie dazu den sizeof()-Befehl (vgl. Vorlesungsfolien). 
Was bedeuten die ausgegebenen Zahlen? 
Also in welcher Einheit sind sie angegeben? 
Benutzen Sie in Ihrer Antwort die Wörter Bit und Byte!
*/

int size_datentypen(){
    //%d dezimale Zahl, \t für Tabulator, \n neue Zeile
    printf("int hat auf dieser Maschine:\t\t%d Bytes\n", sizeof(int));
    printf("short hat auf dieser Maschine:\t\t%d Bytes\n", sizeof(short));
    printf("long hat auf dieser Maschine:\t\t%d Bytes\n", sizeof(long));
    printf("long long hat auf dieser Maschine:\t%d Bytes\n", sizeof(long long));
    printf("char hat auf dieser Maschine:\t\t%d Bytes\n", sizeof(char));
    printf("float hat auf dieser Maschine:\t\t%d Bytes\n", sizeof(float));
    printf("double hat auf dieser Maschine:\t\t%d Bytes\n", sizeof(double));
    printf("long double hat auf dieser Maschine:\t%d Bytes\n", sizeof(long double));
    return 0;
}

/*
b) Entwickeln Sie ein Programm zur Umrechnung von Längeneinheiten. 
Ein Zoll (vgl. http://de. wikipedia.org/wiki/Zoll_(Einheit)) entspricht 2, 54 cm. 
Ihr Programm soll nun eine ganzzahlige Längenanagabe in Zentimetern einlesen, 
diese in Zoll umrechnen und den berechneten Wert korrekt (also als Kommazahl) ausgeben. 
Hierzu muss einer der beteiligten Operanden eine „Kommazahl“ sein. 
Wie kriegen Sie das hin? 
Ganzzahlige Typen können nur ganzzahlige Ergebnisse haben. 
Tip: Typ float und Formatparameter %f.
*/


int umrechnen_laengeneinheiten()
{
    int cm;
    float zoll;
    printf("Bitte geben Sie eine Laenge in Zentimeter an: ");
    //&:Adressoperator. 
    scanf("%d", &cm);
    zoll = (1/2.54) * cm; // Beachten Sie, dass das Zoll hier als
                          // "Kommazahl" notiert wurde. 
    printf("%d Zentimeter = %f Zoll\n", cm, zoll);
    return 0;
}

/*
c) Sie wissen, dass die jeweiligen Datentypen nur begrenzt große Zahlen aufnehmen können. 
Stellen Sie mit einer Schleife1 fest, welche größtmögliche Zahl eine int-Variable darstellen kann. 
Sie können das mit einer einzigen int-Variable tun. 
Vielleicht fällt Ihnen die Lösung auch mit einer zusätzlichen int-Puffervariable leichter.
*/

int grosst_Zahl()
{
    int n = 0;
    while (n >= 0) {
            n++;
    }
    n--;
    printf("Die groesstmoegliche Zahl, die in einem int\n");
    printf("dargestellt werden kann, ist: %d\n", n);
    return 0;
}




int main(){
    //a
    //size_datentypen();
    //umrechnen_laengeneinheiten();
    grosst_Zahl();
}


