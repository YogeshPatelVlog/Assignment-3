#include "stdio.h"
int main()
{

    // Assignment-3 ques-6 . Write a C program to reverse a given integer using a while loop and the modulus operator (%) and division operator (/). For  example, if the input is 1234, the output should be 4321.
        int integer,i,remai,reverse=0;
        printf("Enter your Number : ");
        scanf("%d",&integer);

        while(integer != 0){
            reverse = integer % 10;
            reverse = reverse * 10 + remai;
            integer /= 10;

        }
        printf("reversed number is : %d" , reverse);
}