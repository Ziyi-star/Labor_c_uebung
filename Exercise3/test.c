#include <stdio.h>

#define ARRAY_SIZE 10 // Definiere die Größe des Arrays. Anpassen nach Bedarf.

int array_umdrehen() {
    int array[ARRAY_SIZE];  // Deklariert ein Array von ganzen Zahlen mit einer festgelegten Größe.
    int buffer;             // Variable zum temporären Speichern von Werten beim Tauschen.

    // Aufforderung an den Benutzer, Werte für das Array einzugeben.
    printf("Bitte geben Sie die Werte des Arrays ein!\n\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d. Wert: ", i + 1);
        scanf("%d", &array[i]);  // Liest einen Integer vom Benutzer in das Array an der Position i.
    }

    // Anzeige des ursprünglichen Arrays.
    printf("\nUrspruengliches Array:\n[");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d", array[i]);  // Druckt den Wert jedes Elements im Array.
        if (i < ARRAY_SIZE - 1) {
            printf(", ");  // Fügt ein Komma zwischen den Werten ein, außer nach dem letzten Wert.
        }
    }
    printf("]\n\n");

    // Initialisierung von zwei Zeigern zum Umdrehen des Arrays.
    int *ptrFromLeft = array;  // Zeiger auf das erste Element des Arrays.
    int *ptrFromRight = &array[ARRAY_SIZE - 1];  // Zeiger auf das letzte Element des Arrays.

    // Schleife, die bis zur Hälfte des Arrays läuft, um die Elemente zu tauschen.
    for (int offset = 0; offset < ARRAY_SIZE / 2; offset++) {
        buffer = *(ptrFromLeft + offset);  // Speichert den aktuellen Wert links.
        *(ptrFromLeft + offset) = *(ptrFromRight - offset);  // Tauscht den linken Wert mit dem rechten Wert.
        *(ptrFromRight - offset) = buffer;  // Setzt den gespeicherten linken Wert an die rechte Position.
    }

    // Anzeige des umgedrehten Arrays.
    printf("\nUmgedrehtes Array:\n[");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d", array[i]);  // Druckt jedes Element des umgedrehten Arrays.
        if (i < ARRAY_SIZE - 1) {
            printf(", ");  // Fügt ein Komma zwischen den Werten ein.
        }
    }
    printf("]\n\n");
    
    return 0;  // Rückgabe von 0, was den erfolgreichen Abschluss der Funktion signalisiert.
}

int main() {
    array_umdrehen();  // Aufruf der Funktion zum Umdrehen des Arrays.
    return 0;
}
