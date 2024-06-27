#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main() {
    printf("Unixzeit: %d\n", time(NULL)); // vgl. http://www.epochconverter.com/

    time_t zeit; // <- Diesen Typen koennen Sie sich wie einen int vorstellen.
    printf("Normale Zeit: %s", ctime(&zeit));

    return 0;
}
