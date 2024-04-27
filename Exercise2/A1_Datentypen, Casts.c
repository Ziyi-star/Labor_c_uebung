#include <stdio.h>
#include <stdlib.h>

/*
a) Runden Sie eine Zahl. Nutzen Sie dafür jedoch keine bereits vorgegebene C-Funktion aus der math.h!
Nutzen Sie Cast-Operationen dazu. Angenommen, Sie haben irgend eine reelle Zahl eingelesen und
Sie wollen diese runden, können Sie auf diese Zahl einfach den Summanden 0,5 addieren. Nach
einem Cast auf eine ganze Zahl wird Ihnen das korrekt gerundete Ergebnis geliefert. Prüfen Sie das
nach!*/
int zahl_runden()
{
    // von Kommazahlen zu Ganzzahlen: Nachkommateil wird weggelassen(z. B. float zu int)
    float ungerundeteZahl;
    int gerundeteZahl;
    printf("bitte geben Sie die zu rundende Zahl ein: ");
    scanf("%f", &ungerundeteZahl);
    gerundeteZahl = ungerundeteZahl + 0.5;
    printf("\n%f ist gerundet %d!\n", ungerundeteZahl, gerundeteZahl);
    return 0;
}

/*
Sie erkennen, dass hier eine Division ( 5/2 ) durchgeführt und das Ergebnis in einer float-Variable
gespeichert werden soll. Sobald Sie das Programm jedoch ausführen, erhalten Sie ein unerwartetes
Ergebnis. Korrigieren Sie den Quelltext entsprechend, und zwar ausschließlich durch die Verwendung
von Casts.
*/

int unerwartetes_cast(void)
{
    float ergebnis;
    int dividend = 5;
    int divisor = 2;
    ergebnis = dividend / divisor;
    printf(" Ergebinis ist %f\n", ergebnis);
    return 0;
    //why do we have a f in the end als Ergebnis wenn ich %4.2 habe
    //was bedeutet hier 4.2f
}

int unerwartetes_cast_modified(void)
{
    float ergebnis;
    int dividend = 5;
    int divisor = 2;
    ergebnis = (float)dividend / (float)divisor;
    printf(" Ergebinis ist %f\n", ergebnis);
    return 0;
}

int main()
{
    //zahl_runden();
    unerwartetes_cast();
    //unerwartetes_cast_modified();

}