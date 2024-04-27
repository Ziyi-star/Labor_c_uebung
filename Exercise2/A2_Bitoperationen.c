#include <stdio.h>
#include <stdlib.h>
#include "A2_Bitoperationen_test.c"

/*
a)Implementieren Sie ein Programm, in welchem Sie zwei char-Variablen einlesen. Diese sind bekanntlich
jeweils 8 Bit groß. Bitte speichern Sie beide Zeichen nun in einer einzigen short-Variable (die
bekanntlich 16 Bit groß ist). Nutzen Sie Bitoperationen, um beide char-Variablen in der short-
Variable „unterzubringen“. Geben Sie dann die beiden eingelesenen Zeichen wieder aus – und zwar
nutzen Sie zur Ausgabe nicht die beiden Variablen, in die Sie die Zeichen eingelesen haben, sondern
wieder die short-Variable. Nutzen Sie also auch zur Ausgabe wieder Bitoperationen.
*/

int zwei_char_in_short()
{
    char zeichen1, zeichen2;
    short zeichenkette;
    printf("Bitte geben Sie zwei durch Leerzeichen getrennte Zeichen ein: ");
    scanf("%c %c", &zeichen1, &zeichen2);
    printf("%c\n", zeichen1);
    printf("%c\n", zeichen2);
    zeichenkette = zeichen1;
    decToBinary(zeichenkette);
    zeichenkette = zeichenkette << 8;
    decToBinary(zeichenkette);
    zeichenkette = zeichenkette | zeichen2;
    decToBinary(zeichenkette);
    printf("\nSie haben eingegeben: %c%c\n", zeichenkette >> 8, zeichenkette);
    return 0;
}

/*
In der letzten Übung sollten Sie ein Programm implementieren, welches die größtmögliche positive
Zahl, die in einer int-Variablen aufgenommen werden kann, bestimmt. Einen Lösungsvorschlag
finden Sie im folgenden Listing. Ändern Sie den Quelltext derart ab, dass Sie vor der Ausgabe der
größtmöglichen Zahl kein Dekrement mehr nutzen. Nutzen Sie eine Bitoperation (Tipp: Tilde!).
Warum klappt das?*/
int groesstmoegliche_positive_zahl(void)
{
    int n = 123;
    while (n > 0)
    {
        n++;
    }
    //n--;
    n=~n;
    printf("Die groesstmoegliche Zahl in einer int - Variable ist: %d\n", n);
    return 0;
}
/* warum funktioniert ~:
Wenn eine Ganzzahl ihren maximalen Wert erreicht und dann erhöht wird, 
führt dies zu einem Überlauf und die Zahl wird zum kleinstmöglichen Wert, 
der für eine int dargestellt werden kann, normalerweise ist das -2147483648 für ein 32-Bit int (das bitweise Muster 1000...0). 
Durch Anwendung der bitweisen NOT-Operation auf diesen Wert (~) werden alle Bits umgekehrt, 
was zu 0111...1 führt, das ist der größtmögliche positive Wert für ein int, normalerweise 2147483647.*/

/*
c) Implementieren Sie ein Programm, in welchem Sie eine Zahl einlesen. Diese soll als Exponent im
Ausdruck 2n dienen. Ihr Programm soll diesen Ausdruck möglichst effizient berechnen. Nutzen Sie
Bitoperationen!*/


int main()
{
    //zwei_char_in_short();
    //groesstmoegliche_positive_zahl();
}