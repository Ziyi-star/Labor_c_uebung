#include <stdio.h>
#include <stdlib.h>

/*this version is just for positive number
void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];
    // counter for binary array
    int i = 0;
    while (n > 0)
    {
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    while (i % 8 != 0) {
        binaryNum[i++] = 0;
    }
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
    
    printf("%\n");
    
}
*/

//also for negative Zahl
void decToBinary(int n) {
    // Array to store binary number, ensuring all bits are handled
    int binaryNum[32];
    int i = 0;

    // Initialize all bits in array to zero
    for (int k = 0; k < 32; k++) {
        binaryNum[k] = 0;
    }

    // Handle negative numbers and zero
    unsigned int mask = n;  
    // Use an unsigned int to avoid issues with right-shifting negatives

    // Extract each bit; handle 32 bits for standard integer sizes
    while (i < 32) {
        binaryNum[i++] = mask % 2;
        mask /= 2;
    }

    // Print binary array in reverse order
    for (int j = 31; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    
    printf("\n");
}

/*
int main(){
    decToBinary(1);
    decToBinary(20);
    decToBinary(-10);
    decToBinary(-22);
}
*/



