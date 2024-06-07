#include "stdio.h"
int main(){
    //Asssignment-3 Ques 3 Write a C program that uses the size of operator to displaly the size of different data types (int,float, double,char) in  bytes
    int intValue;
    char charValue;
    float floatValue;
    double doubleValue;

    printf("Size of int Value is : %zu bytes\n", sizeof(intValue));
    printf("Size of flaot Value is : %zu bytes\n", sizeof(floatValue));
    printf("Size of double Value is : %zu bytes\n", sizeof(doubleValue));
    printf("Size of char Value is : %zu bytes\n", sizeof(charValue));

}