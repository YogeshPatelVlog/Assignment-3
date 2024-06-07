#include "stdio.h"
int main(){
    //Assignment-3 Ques-5 Write a C program to check if a given number is prime using a for loop and the modulus operator (%). A prime number is only divisible by 1 and itself

    int userInput;
    printf("Enter your Number : ");
    scanf("%d",&userInput);
    if(userInput % 1 == 0 || userInput % userInput == 0){
        printf("Your number is prime number ");
    }

    
    else{
        printf("Your number is not a prime number");
    }
}