// Leo Mindlin
// CS 50
// Project 5
// 11/05/2022

#include<stdio.h>

struct Car {
    char make[30];

    double price;

    int year;

    char vin[17];
};

int main (void) {
    struct Car x = {"Chevy Impala", 12500.55, 2022, "12345678901234567"};

    printf("Make: %s\n", x.make);
    printf("Price: %.2f\n", x.price);
    printf("Vin: %s\n", x.vin);
    printf("Year: %d\n",x.year);

}

