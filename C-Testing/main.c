// Leo Mindlin
// CS 50
// Project 5
// 11/05/2022

#include<stdio.h>
#include <time.h>           // for time() function
#include <stdlib.h>         // for srand() and rand() functions

void rerollDice(int sum, int score);

int main (void) {
    printf("Leo Mindlin - Project 4: Craps \n\n");

    srand(time(NULL));

    int dice1 = (rand() % 6)+1; // Dice 1 number 1-6
    int dice2 = (rand() % 6)+1; // Dice 2 number 1-6
    int sum = dice1 + dice2;

    printf("Player Rolled %d + %d = %d \n\n", dice1, dice2, sum);

    switch (sum) {
        case 7:
        case 11:
            printf("Player Wins! \n");
            break;
        case 2:
        case 3:
        case 12:
            printf("Craps! Player Looses. \n");
            break;
        default:
            printf("Point is %d, game continues:\n\n", sum);
            rerollDice(sum, sum);
    }


    printf("\nLeo Mindlin - End of Project 4 \n");

}

void rerollDice(int sum, int score) {
    int dice1 = (rand() % 6)+1; // Dice 1 number 1-6
    int dice2 = (rand() % 6)+1; // Dice 2 number 1-6
    sum = dice1 + dice2;

    printf("Player Rolled %d + %d = %d \n", dice1, dice2, sum);

    if (sum == score) {
        printf("\nPlayer Wins! \n");
    } else if (sum == 7) {
        printf("\nPlayer Looses. \n");
    } else {
        rerollDice(sum, score);
    }

}
