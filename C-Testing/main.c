// Leo Mindlin
// CS 50
// Project 5
// 11/05/2022

#include<stdio.h>

int X = 2;
int Y = 5;
void Func1(void);

//int main() {
//    printf("%d, %d\n", X, Y); // 1
//    Func1();
//    printf("%d, %d\n", X, Y); // 3
//
//    return 0;
//}
//
//void Func1(void) {
//    int X =3;
//
//    X = X+3;
//    Y = Y+4;
//    printf("%d, %d\n", X, Y); // 2
//}

void Func1(void);
int main() {
    Func1();
    Func1();

    return 0;
}

void Func1(void) {
    int X1 = 0;
    auto int X2 = 0;
    register int X3 = 0;
    static int X4 = 0;

    X1++;
    X2++;
    X3++;
    X4++;

    printf("%d  %d  %d  %d\n", X1, X2, X3, X4); // 4
}
