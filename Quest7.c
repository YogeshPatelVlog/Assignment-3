#include <stdio.h>
int main(){
    // Assignment-3 Ques-7 Write a c proggram to find the sum of the digits of a given integer using a while loop and the modulous operator (%) and division(/) operator 

    int i,n,sum=0;
    printf("Enter your number : ");
    scanf("%d",&n);

    while(i>0){
        // printf("Your digits sum is : %d",sum);
        n = i % 10;
        sum = sum + n;
        n = n / 10;
    }
    printf("Your digits sum is : %d",sum);
}