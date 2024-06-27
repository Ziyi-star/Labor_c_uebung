#include <stdio.h>
#include <stdlib.h>

int main() {
	// Dateizeiger deklarieren.
    FILE *fp;
	// Dateizeiger belegen
    fp = fopen("dateiE4T4g.txt", "r");
    if (fp == NULL) {
        printf("FEHLER! Datei vermutlich nicht vorhanden!\n");
    } else {
	    // So lange iterieren, bis der Zeiger am Ende der Datei angelang ist
        while(!feof(fp)) {
            printf("%c", fgetc(fp));
        }
    }
    fclose(fp);
    fp = NULL;
    return 0;
}
