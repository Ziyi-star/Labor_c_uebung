#include <stdio.h>
#include <stdlib.h>

int main() {
    int zahl;
    printf("Bitte geben Sie eine Zahl ein: ");
    scanf("%d", &zahl);

    // Die Variable muss au�erhalb der Bl�cke, die zum if geh�ren, sichtbar sein.
    int geradeUngerade;

    if (zahl % 2 == 0) {
        geradeUngerade = 0;
    } else {
        geradeUngerade = 1;
    }

    if (geradeUngerade == 0) {
        printf("Die Zahl ist gerade!\n");
    } else {
        printf("Die Zahl ist ungerade!\n");
    }


    return 0;
}
