#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 10

/*
a) Legen Sie eine Integer-Variable an. Lesen Sie in diese einen Wert ein. Geben Sie anschließend Wert
und Adresse der Variable aus!*/

int einlegen_int()
{
    int x;
    printf("Bitte geben Sie einen Wert ein: ");
    scanf("%d", &x);
    printf("Der Wert der Variable ist: %d\n", x);
    // Adresse von eine int
    printf("Die Adresse der Variable im Speicher ist: %p\n", &x);
    return 0;
}

/*
b) Legen Sie ein Integer-Array an. Geben Sie für jedes Element Inhalt und Adresse aus. Was fällt Ihnen
auf?*/

int int_array()
{
    // merken:int hat 4 Byte und andere Typen wie groß, %p Platzhalter für adresse
    int array[] = {23, 42, 5, 7, 12, 3, 0, 9, 112, 31337};
    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        printf("Wert: %d \t Adresse: %p\n", array[i], &array[i]);
    }
    printf("\nDie Variablen werden direkt hintereinander im Speicher abgelegt. Bedenken Sie: ein int hat 4 Byte.\n");
    return 0;
}

/*
c) Legen Sie ein mehrdimensionales Integer-Array an. Geben Sie für jedes Element Inhalt und Adresse
aus. Was fällt Ihnen auf?
*/
int mehrdimensionales_int_array()
{
    // merken:Die Variablen werden auch bei mehrdimensionalen Arrays direkt hintereinander im Speicher abgelegt, int hat 4 Byte.
    int array[3][3] = {{23, 42, 5}, {7, 12, 3}, {0, 9, 112}};
    printf("+------------------+------------------+------------------+\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("| %3d (@ %p) ", array[i][j], &array[i][j]);
        }
        printf("|\n+------------------+------------------+------------------+\n");
    }
    printf("\nDie Variablen werden auch bei mehrdimensionalen Arrays direkt hintereinander im Speicher abgelegt. Bedenken Sie: ein int hat 4 Byte.\n");
    return 0;
}

/*d) Lesen Sie ein Integer-Array mit beliebigen Werten ein. Drehen Sie es um, benutzen Sie dazu jedoch
Pointer. Denken Sie daran, dass Sie auch auf Pointer arithmetische Operationen anwenden können.
**Array umdrehen
*/
int array_umdrehen()
{
    int array[ARRAY_SIZE];
    int buffer;

    printf("Bitte geben Sie die Werte des Arrays ein!\n\n");
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d. Wert: ", i + 1);
        // Zeigerarithmetik: array + i, besser so:
        scanf("%d", &array[i]);
    }

    printf("\nUrspruengliches Array:\n[");
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d", array[i]);
        if (i < ARRAY_SIZE - 1)
        {
            printf(", ");
        }
    }
    printf("]\n\n");

    // Wir koennen bei ptrFromLeft das & weg lassen, des array decays wegen.
    int *ptrFromLeft = array; // Zeiger auf das erste Element des Arrays.
    // Hier aber nicht, da der Indexoperator einen direkten Wert liefert.
    int *ptrFromRight = &array[ARRAY_SIZE - 1]; // Zeiger auf das letzte Element des Arrays.

    for (int offset = 0; offset < ARRAY_SIZE / 2; offset++)
    {
        buffer = *(ptrFromLeft + offset);
        *(ptrFromLeft + offset) = *(ptrFromRight - offset);
        *(ptrFromRight - offset) = buffer;
    }

    printf("\nUmgedrehtes Array:\n[");
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d", array[i]);
        if (i < ARRAY_SIZE - 1)
        {
            printf(", ");
        }
    }
    printf("]\n\n");

    return 0;
}

/*
f) Legen Sie eine Funktion an, in der Sie eine Integer-Variable negieren. Übergeben Sie jedoch nicht
die Variable an die Funktion und geben Sie in dieser Funktion (bzw. aus dieser Funktion heraus)
keinen Wert zurück! Übergeben Sie stattdessen einen Zeiger auf eine Variable, die sich lokal in
der aufrufenden Funktion befindet. Machen Sie also einen Call by Reference, keinen Call by Value.
Geben Sie den negierten Wert dann in der aufrufenden Funktion aus.
*/
void negiere(int *ptr)
{
    *ptr = *ptr * -1;
}

/*
h)Betrachten Sie das am Ende dieser Teilaufgabe abgebildete Listing. Erweitern Sie die Funktion
laenge() so, dass sie die Anzahl der Buchstaben zurück liefert. Bedenken Sie: Strings sind Nullterminiert.
Außerdem muss Ihre Funktion eine Adresse auf den übergebenen String als Parameter
bekommen. Schreiben sie also dort, wo irgendwas als Kommentar steht, sinnvollen Quelltext.
*/
int laenge(char *c)
{
    int counter = 0;
    // irgendwas
     while(*c != '\0') {
        counter++;
        c++;
    }
    return counter;
}

int main()
{
    // einlegen_int();
    // int_array();
    // mehrdimensionales_int_array();
    // array_umdrehen();
    //int wert = 23;
    // Kopie des nicht negierten Wertes erzeugen:
    //int nichtNegierterWert = wert;
    // Beachte: hier wird nichts zurück gegeben! Negierung:
    //negiere(&wert);
    // Ausgabe des nicht negierten und des negierten Werts:
    //printf("%d ist negiert %d!\n", nichtNegierterWert, wert);
    printf(" Laenge : %d", laenge("DAS SIND BUCHSTABEN !"));
    return 0;
}