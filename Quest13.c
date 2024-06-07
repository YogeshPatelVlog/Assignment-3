#include "stdio.h"
//Assignment-3 Ques 13 . Write a C program to check if a given number is a perfect number using a for loop and the modulus operator (%). Aperfect number is a positive integer that is equal to the sum of its positive proper divisors, that is, divisors excluding the number. Ex:- 6, 28, 496, 8128

int main()
{
    int i, num, sum = 0;
    printf("Enter any number to check perfect number: ");
    scanf("%d", &num);
    for(i = 1; i <= num / 2; i++)
    {
       
        if(num%i == 0)
        {
            sum += i;
        }
    }
    if(sum == num && num > 0)
    {
        printf("%d is PERFECT NUMBER", num);
    }
    else
    {
        printf("%d is NOT PERFECT NUMBER", num);
    }

    return 0;
}
