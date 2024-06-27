#include <stdio.h>
#include <stdlib.h>

/* SCHAUEN SIE BEI PROBLEMEN IM KOMMENTAR GANZ UNTEN! */
int main() {
    char c1, c2;
    int pos = 0;
    FILE *fp = fopen("dateiE4T4h.txt", "r+");
    int ctr = 0;
    if (fp == NULL) {
        printf("FEHLER! Datei vermutlich nicht vorhanden!\n");
    } else {
        // Dateilaenge in Byte zaehlen!
        while(!feof(fp)) {
			// Dateizeiger für jeden char eins vorruecken lassen, einen int-Zaehler mitlaufen lassen
            fgetc(fp);
            ctr++;
        }
        // Dateizeiger zurueck an den Anfang, da er durch das Zaehlen am Ende der Datei steht
        rewind(fp);
        for (int i = 0; i < ctr-1; i++) {
            // Bei jeder Iteration Zeigerposition merken!
            fseek(fp, pos, 0);
            // Zeichen an Zeigerposition merken. ACHTUNG: Zeiger wird vorgerueckt.
            c1 = fgetc(fp);
            // Zeigerposition wieder zurücksetzen
            fseek(fp, pos, 0);
            // Zeichen invertieren.
            if (c1 >= 97 && c1 <= 122) {
                c2 = c1 - 32;
            } else if (c1 >= 65 && c1 <= 90){
                c2 = c1 + 32;
            } else {
                c2 = c1;
            }
            // Invertiertes Zeichen an diese Stelle schreiben.
            fputc(c2, fp);
            // Zeigerposition wieder vorrücken.
            pos++;
            // Ergenis wird ausgegeben, steht aber auch in der Datei.
            printf("%c -> %c\n", c1, c2);
        }
    }
    fclose(fp);
    fp = NULL;
    return 0;
}

/* ALTERNATIVE LÖSUNG MIT FSEEK, FALLS SIE PROBLEME MIT DEM OBIGEN PROGRAMM UNTER LINUX HABEN
int main() {
    char c1, c2;
    int pos = 0;
    FILE *fp = fopen("datei.txt", "r+");
    int ctr = 0;
    if (fp == NULL) {
        printf("FEHLER! Datei vermutlich nicht vorhanden!\n");
    } else {
        // Dateilaenge in Byte zaehlen!
        while(!feof(fp)) {
            // Dateizeiger für jeden char eins vorruecken lassen, einen int-Zaehler mitlaufen lassen
            fgetc(fp);
            ctr++;
        }
        // Dateizeiger zurueck an den Anfang, da er durch das Zaehlen am Ende der Datei steht
        rewind(fp);
        for (int i = 0; i < ctr-1; i++) {
            // Bei jeder Iteration Zeigerposition an aktuelle Stelle in der Datei (0 bis ctr - 1) setzen!
            fseek(fp, i, 0);
            // Zeichen an Zeigerposition merken. ACHTUNG: Zeiger wird vorgerueckt.
            c1 = fgetc(fp);
            // Zeigerposition wieder zurücksetzen an i, welches irgendwo in [0 ... ctr - 1] steht
            fseek(fp, i, 0);
            // Zeichen invertieren.
            if (c1 >= 97 && c1 <= 122) {
                c2 = c1 - 32;
            } else if (c1 >= 65 && c1 <= 90){
                c2 = c1 + 32;
            } else {
                c2 = c1;
            }
            // Invertiertes Zeichen an diese Stelle schreiben.
            fputc(c2, fp);
            // Ergenis wird ausgegeben, steht aber auch in der Datei.
            printf("%c -> %c\n", c1, c2);
        }
    }
    fclose(fp);
    fp = NULL;
    return 0;
}
*/
