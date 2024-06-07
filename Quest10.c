#include "stdio.h"
// Assignment-3 Ques-10 Write a C program to calculate the power of a number using a for loop and the multiplication operator (*). For example, calculate a^b where a and b are inputs from the user.

int main() {
    int base, exp;
    long double result = 1.0;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer is : %.0Lf", result);
    return 0;
}
