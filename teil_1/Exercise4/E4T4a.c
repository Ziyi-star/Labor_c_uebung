#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    // strcmp() aus string.h ist die am besten geeignete Bibliotheksfunktion.
    if (strcmp(argv[1], argv[2]) == 0) {
        printf("Die Woerter %s und %s sind gleich!\n", argv[1], argv[2]);
    } else {
        printf("Die Woerter %s und %s sind ungleich!\n", argv[1], argv[2]);
    }
    return 0;
}
