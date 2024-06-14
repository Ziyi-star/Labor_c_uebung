#include <stdio.h>
#include <stdlib.h>

/*
a) Sie finden hier einen Quelltext, der eine Wahrheitstabelle (die des UND-Operators) auf der Konsole ausgibt. 
Verstehen Sie diesen Quelltext, übernehmen Sie ihn in Code::Blocks und geben Sie Wahrheitswerte für verschiedene andere Operatoren (ODER, NICHT usw.) aus.
*/
int Wahrheitswerte () {
    printf ("+---+---+---+\n");
    printf ("| UND |\n");
    printf ("+---+---+---+\n");
    printf ("| a | b | W |\n");
    printf ("+---+---+---+\n");
    printf ("| %d | %d | %d |\n", 0, 0, 0 && 0);
    printf ("| %d | %d | %d |\n", 1, 0, 1 && 0);
    printf ("| %d | %d | %d |\n", 0, 1, 0 && 1);
    printf ("| %d | %d | %d |\n", 1, 1, 1 && 1);
    printf ("+---+---+---+\n\n");
    return 0;

}

/*b) Implementieren Sie ein Programm, welches feststellt, ob eine von Ihnen eingegebene Zahl gerade oder ungerade ist. 
Nachdem Sie die Zahl in der Konsole eingegeben haben, soll die Ausgabe gerade bzw. ungerade auf der Konsole ausgegeben werden. 
Bedenken Sie, dass eine Zahl dann gerade ist, wenn sie ohne Rest durch 2 teilbar ist.
*/
int gerade_or_ungerade()
{
    int zuTestendeZahl;
    printf("Bitte geben Sie eine zu testende Zahl ein: ");
    scanf("%d", &zuTestendeZahl);
    //Modulo (Rest der ganzzahligen Division)
    if (zuTestendeZahl % 2 == 0) {
        printf("%d ist eine gerade Zahl.\n", zuTestendeZahl);
    } else {
        printf("%d ist eine ungerade Zahl.\n", zuTestendeZahl);
    }
    return 0;
}


/*
c) Implementieren Sie ein Programm, das zwei Zahlen einliest. Bestimmen Sie auf möglichst elegante Art (Tip: Fragezeichenoperator), 
welche der beiden Zahlen die größere ist und geben Sie sie auf der Konsole aus. 
Schauen Sie sich dazu nochmal die Vorlesungsfolien (oder das Buch) an.*/
int groesser_zahl()
{
    int ersteZahl, zweiteZahl;
    printf("Bitte geben Sie die erste Zahl ein: ");
    scanf("%d", &ersteZahl);
    printf("Bitte geben Sie die zweite Zahl ein: ");
    scanf("%d", &zweiteZahl);
    printf("Die groessere der beiden Zahlen %d und %d ist: %d\n", ersteZahl, zweiteZahl,
           (ersteZahl > zweiteZahl ? ersteZahl : zweiteZahl));
    //?: if richtig ausgewertet, dann die erste ausgegeben, anderes Fall, die zweite
    return 0;
}

/*d) Wie Sie wissen, kann die scanf()-Funktion mehrere Variablen auf einmal einlesen. 
Implementieren Sie ein Programm, das beispielsweise den Ausdruck 2 + 2, den Sie so auf der Konsole eingeben,
wenn Ihr Programm läuft, korrekt ausrechnet. 
Das Muster, welches Ihr Programm berechnen soll, ist OPERAND OPERATOR OPERAND. 
Implementieren Sie die Operationen Addition, Subtraktion, Multiplikation und Division. 
Bedenken Sie unbedingt, dass die Division durch 0 nicht erlaubt ist; 
führen Sie deswegen eine entsprechende Prüfung der eingegebenen Werte durch. 
Sollte als Divisor eine 0 eingegeben werden, geben Sie eine Fehlermeldung aus und lassen Sie das Programm enden.
*/

int calculator() {
    double operand1, operand2, result;
    char operator;

    printf("Enter expression (operand operator operand): ");
    scanf("%lf %c %lf", &operand1, &operator, &operand2);
    //switch, continue,break
    switch(operator) {
        case '+':
            result = operand1 + operand2;
            printf("%f %c %f = %f\n", operand1, operator, operand2, result);
            break;
        case '-':
            result = operand1 - operand2;
            printf("%f %c %f = %f\n", operand1, operator, operand2, result);
            break;
        case '*':
            result = operand1 * operand2;
            printf("%f %c %f = %f\n", operand1, operator, operand2, result);
            break;
        case '/':
            if(operand2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            } else {
                result = operand1 / operand2;
                printf("%f %c %f = %f\n", operand1, operator, operand2, result);
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    return 0;
}

int main(){
    //Wahrheitswerte();
    //gerade_or_ungerade();
    //groesser_zahl();
    calculator();
}
