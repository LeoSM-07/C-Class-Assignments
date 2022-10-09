// Leo
// CS 50
// Project 2: Printing Diamonds
// 10/08/2022

#include <stdio.h>
#include <time.h>           // for time() function
#include <stdlib.h>         // for srand() and rand() functions

#define UPPER_LIMIT     41  // For Random Number
#define LOWER_LIMIT     21  // For Random Number

int main(void)
{
    int sampleSize;
    
    srand(time(NULL)); // Seed random number
    sampleSize = rand() % (UPPER_LIMIT - LOWER_LIMIT + 1) + LOWER_LIMIT;

    if (sampleSize % 2 == 0) sampleSize++; // Make random number odd (if even)

    printf("Random Number: %d \n", sampleSize); // Print random number for testing


    int halfSampleSize = (sampleSize-1)/2;
    int row, column, middle; // All ints used in for loops

    for (row = 0; row <= halfSampleSize; row++) { // for each row in half the sample size

        for (column = row; column <= halfSampleSize; column++) // print horizontally
            putchar(' ');

        for (column = 0; column < row*2 - 1; column++) // add the correct number of letters at the end
            putchar('L');

        putchar('\n');
    }

    for ( middle = 0; middle < sampleSize; middle++ ) // print the middle divider, should repeat for the entire sample size
        putchar('=');

    putchar('\n');

    for (row = halfSampleSize; row >= 0; row--) { // inverse of above

        for (column = row; column <= halfSampleSize; column++)
            putchar(' ');

        for (column = 0; column < row*2 - 1; column++)
            putchar('M');

        putchar('\n');
    }

    return 0;
}
