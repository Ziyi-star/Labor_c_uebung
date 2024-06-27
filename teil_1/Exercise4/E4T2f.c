#include <stdio.h>
#include <stdlib.h>

#include "taschenrechner.h"

int main()
{
    float operand1, operand2;
    char operator;

    while(1) {
        printf("Ihre Eingabe: ");
        scanf("%f %c %f", &operand1, &operator, &operand2);

        if (operator == '/' && operand2 == 0) {
            printf("FEHLER! Division durch 0 ist nicht erlaubt!\n");
            continue;
        }

        printf("Ergebnis: ");

        switch (operator) {
            case '+':   printf("%4.2f\n", addition(operand1, operand2));
                        break;
            case '-':   printf("%4.2f\n", subtraktion(operand1, operand2));
                        break;
            case '/':   printf("%4.2f\n", division(operand1, operand2));
                        break;
            case '*':   printf("%4.2f\n", multiplikation(operand1, operand2));
                        break;
            default:    printf("Bitte korrekten Ausdruck angeben!\n");
        }
    }

    return 0;
}

