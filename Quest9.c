#include <stdio.h>
//Assignmnet-3 Ques-9 Write a C program to count the number of digits in a given integer using a while loop and the division operator (/). For example, if the input is 1234, the output should be 4.
int main()
{
    long long num;
    int count = 0;

    
    printf("Enter any number: ");
    scanf("%lld", &num);
    do
    {
        count++;
        num /= 10;
    } while(num != 0);

    printf("Total digits: %d", count);

    return 0;
}
