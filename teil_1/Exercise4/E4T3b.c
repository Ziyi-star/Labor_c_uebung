#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    char *wort = argv[1];

    while (*wort != '\0') {
        printf("%c  %c\n", *wort, *wort >= 97 ? *wort - 32 : *wort + 32);
        wort++;
    }

    return 0;
}
