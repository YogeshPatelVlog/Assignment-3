#include <stdio.h>
int main(){
    //Assisment-4 Ques-4 Write a C program to calculate the factorial of a given number using a while loop. Use the multiplication operator (%) to compute the factorial
    int factorial,i,n;
    factorial=i=1;
    printf("Enter your number : ");
    scanf("%d",&n);
    while (i<=n)
    {
        factorial *= i;
        i++;
        
    }
     printf("The factorial is : %d",n,factorial);
     return 0;
}