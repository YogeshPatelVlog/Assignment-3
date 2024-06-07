#include <stdio.h>
int main(){
    //Assignment-3 Quest-1 Write a C program to find the sum of the first n natural numbers using a for loop Use the Addition operator (+) to calculate the sum
    int i,sum = 0,n=10; // we take int n
    for(i = 1; i<=n; ++i){ // using infinite n numbers we usefor loop middle condition (i=i+1)
    sum += i;
    printf(" %d\n",i);
    }
    printf( " their sum is : %d",sum);
    return 0;
}