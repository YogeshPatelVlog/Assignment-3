#include "stdio.h"
//Assignment-3 Ques14 Write a C program to find the sum of all even numbers and the sum of all odd numbers from 1 to n using a for loop and the modulus operator (%)
void main()
{
    int i, num, oddSum = 0, evenSum = 0;
 
    printf("Enter the value of num\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            evenSum = evenSum + i;
        else
            oddSum = oddSum + i;
    }
    printf("Sum of all odd numbers : %d\n", oddSum);
    printf("Sum of all even numbers : %d\n", evenSum);
}
