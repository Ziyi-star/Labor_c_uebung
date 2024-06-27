#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
    // sin() stammt aus der math.h, atof() aus der stdlib.h
	// Suchen Sie z. B. hier nach atof: http://www.cplusplus.com/
    printf("sin(%f) = %f", atof(argv[1]), sin(atof(argv[1])));
    return 0;
}
