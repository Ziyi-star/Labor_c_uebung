#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    for (int i = atoi(argv[1]); i <= atoi(argv[2]); i++) {
        printf("%d  ", i);
    }
    return 0;
}
