#include <stdio.h>
#include <stdlib.h>

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

int main()
{
    int n = 3; // 000...0011
    decToBinary(n);
    int m = 5; // 000...0101
    decToBinary(m);
    int o = n | m;
    decToBinary(o);
    //XOR
    int p = n ^ m;
    decToBinary(p);

}
