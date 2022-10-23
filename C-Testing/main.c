// Leo
// CS 50
// Project 3
// 10/22/2022

#include <stdio.h>
#include <time.h>           // for time() function
#include <stdlib.h>         // for srand() and rand() functions

#define ARRAY_SIZE 20       // Size of array
#define UPPER_LIMIT 20      // Max. number of arrays used
#define LOWER_LIMIT 12      // Min. number of arrays used
#define DATA_UPPER_LIMIT 90 // Max. of each array element
#define DATA_LOWER_LIMIT 10 // Min. of each array element

void RandomizeArray(int array[], int arrSize);
void PrintArrayValues(int array[], int arrSize);
void FindMedianOfArray(int array[], int arrSize);
void GetMinimumMaximum(int array[], int arrSize);
void FindMedianOfArray(int array[], int arrSize);

void SortArray(int array[], int arrSize);


void PrintArrayValues(int array[], int arrSize) {
    int index;
    for(index = 0; index < arrSize; index++) {
        printf("%d ", array[index]);
    }

    printf("\n");
}

void GetMinimumMaximum(int array[], int arrSize) {
    int index;
    int maximum = array[0];
    int minimum = array[0];
    for(index = 0; index < arrSize; index++) {
        int number = array[index];
        if(number > maximum) {
            maximum = number;
        }
        if(number < minimum) {
            minimum = number;
        }
    }
    printf("\nMinimum Int = %d\n", minimum);
    printf("Maximum Int = %d\n", maximum);
}

void FindArrayAverage(int array[], int size) {
    int totalSize;
    int averageSize;
    int index;

    totalSize = 0;
    for(index = 0; index < size; index++) {
        totalSize+= array[index];
    }

    averageSize = totalSize / size;
    printf("\nAverage = %d\n\n", averageSize);
}

void RandomizeArray(int array[], int size) {
    int index;

    for(index = 0; index < size; index++) {

        int random = rand() % (DATA_UPPER_LIMIT - DATA_LOWER_LIMIT + 1) + DATA_LOWER_LIMIT;
        array[index] = random;

    }
}

void SortArray(int array[], int arrSize) { // Using a selection sort
    int step;
    for(step = 0; step < arrSize - 1; step++) {

        int min = step;

        int index;

        for(index = step + 1; index < arrSize; index++) {
            if(array[index] < array[min]) {
                min = index;

            }
        }
        int temp = array[step];
        array[step] = array[min];
        array[min] = temp;
        PrintArrayValues(array, arrSize);
    }
}


void FindMedianOfArray(int array[], int arrSize) {
    int median;
    if(arrSize % 2 == 0) {
        int below = array[arrSize / 2 - 1];
        int above = array[arrSize / 2];
        median = (below + above) / 2;
    }
    else {
        median = array[arrSize / 2];
    }

    printf("\nMedian of array = %d\n", median);
}

int main(void) {
    srand(time(NULL));
    int arrSize = rand() % (UPPER_LIMIT - LOWER_LIMIT + 1) + LOWER_LIMIT;
    int mainArray[arrSize];

    printf("Léo Mindlin - Project 3\n\n");
    printf("Number of elements = %d\n\n", arrSize);
    printf("Array elements: \n");

    RandomizeArray(mainArray, arrSize);

    PrintArrayValues(mainArray, arrSize);

    GetMinimumMaximum(mainArray, arrSize);

    FindArrayAverage(mainArray, arrSize);

    SortArray(mainArray, arrSize);

    FindMedianOfArray(mainArray, arrSize);
}
