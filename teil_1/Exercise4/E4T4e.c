#include <stdio.h>
#include <stdlib.h>

int main() {
    char u[10], r[10], i[10];

    printf("URI-Rechner\n");
    printf("===========\n");
    printf("(X  = Ende)\n");
    printf("-----------\n");
    while(1) {
        u[0] = '-', r[0] = '-', i[0] = '-';
        printf("Falls Sie U kennen, so geben Sie den Wert in Volt ein, druecken Sie sonst ?: ");
        scanf("%s", u);
        printf("Falls Sie R kennen, so geben Sie den Wert in Ohm ein, druecken Sie sonst ?: ");
        scanf("%s", r);
        printf("Falls Sie I kennen, so geben Sie den Wert in Ampere ein, druecken Sie sonst ?: ");
        scanf("%s", i);
        if (u[0] == '?') {
            printf("%f Ohm * %f Ampere = >> %f Volt <<", atof(r), atof(i), atof(r) * atof(i));
        }
        if (r[0] == '?') {
            printf("%f Volt / %f Ampere = >> %f Ohm <<", atof(u), atof(i), atof(u) / atof(i));
        }
        if (i[0] == '?') {
            printf("%f Volt / %f Ohm = >> %f Ampere <<", atof(u), atof(r), atof(u) / atof(r));
        }
        printf("\n\n");
    }

    return 0;
}
