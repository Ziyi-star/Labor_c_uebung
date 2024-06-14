#include <stdio.h>
#include <stdlib.h>

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

int main(){
    calculator_allways();
}
