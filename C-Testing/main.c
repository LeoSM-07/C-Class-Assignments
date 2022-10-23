// Leo
// CS 50
// Project 4
// 10/22/2022

#include <stdio.h>

void MultiplyDivide (double a, double b, double *c, double *d);
void AmountAboveAverage (int array[20], int arrSize, int arrAverage, int *amountAboveAverage);

void MultiplyDivide (double a, double b, double *c, double *d)

{
    *c = a/b;
    *d = a*b;
}

void AmountAboveAverage (int array[20], int arrSize, int arrAverage, int *amountAboveAverage)
{
    int i;
    int total = 0;

    printf("arrsize: %d \n", arrSize);
    printf("average:%d \n", arrAverage );

    for(i = 0; i < arrSize; i++) { // Check if each element is above the average
        if (array[i] > arrAverage) {
            total++;
        }
    }

    *amountAboveAverage = total;
}

int main (void) {

    printf("Léo Mindlin - Project 4\n\n");

// BEGIN PART 1:
    double a = 3.5;
    double b = 2.1;
    double c;
    double d;

    printf("Enter value for a: ");
    scanf("%lf", &a);
    printf("Enter value for b: ");
    scanf("%lf", &b);

    MultiplyDivide(a, b, &c, &d);

    printf("value of c: %f \nvalue of d: %f \n\n\n", c, d);


// BEGIN PART 2:
    int array[20];
    int i;
    int v;
    int sum = 0;
    int amountAboveAverage;


    for (i = 0; i < 20; ++i) { // Get 20 inputs
        printf("Value %d: ",i+1);
        scanf("%d", &v);
        array[i] = v;
    }

    for(i = 0; i < 20; i++) { // Find the sum of array
       sum = sum + array[i];
    }

    int average = sum/20;

    AmountAboveAverage(array, 20, average, &amountAboveAverage);

    printf("Amount above average: %d\n", amountAboveAverage);

    return 0;

}
