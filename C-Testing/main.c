// Leo Mindlin
// CS 50
// Project 6
// 12/03/2022

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    printf("Leo Mindlin - Project 6: Adding Parody Bit \n\n");
    // Time for random values
    srand((unsigned int) time(NULL));

    int data[12][8];
    int k, i, n;

    // Fill array with random bits
    for (k = 0; k < 12; k++) {
        for (i = 0; i < 8; i++) {
            n = rand() % 2;
            data[k][i] = n;
        }
    }

    // Loop over 2D array
    for (k = 0; k < 12; k++) {
        n = 0; // The sum of all bits in the byte

        // Print original byte & add the sum
        for(i = 0; i < 8; i++) {
            printf("%d ", data[k][i]);
            n += data[k][i];
        }

        // Compute and print parody bit
        printf("\t%d\n", n % 2);

    }

    printf("\nLeo Mindlin - Project 6: End of of Program \n");
    return 0;
}
