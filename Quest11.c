#include "stdio.h"
//Assignment-3 Ques-11 Write a C program to check if a given number is an Armstrong number using a while loop, modulus operator (%), and division operator (/). An Armstrong number is a number that is equal tothe sum of its own digits each raised to the power of the number of digit

int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
