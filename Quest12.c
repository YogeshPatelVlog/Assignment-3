#include "stdio.h"
//Assignment-3 Ques 12 Write a C program to find the greatest common divisor (GCD) of two numbers using a while loop and the modulus operator (%). Implement the Euclidean algorithm.
// C program to find GCD of two numbers 
#include <stdio.h> 
int gcd(int a, int b) {
	if (a == 0) 
		return b; 
	if (b == 0) 
		return a; 

	if (a == b) 
		return a; 

	
	if (a > b) 
		return gcd(a - b, b); 
	return gcd(a, b - a); 
} 


int main() 
{ 
	int a = 98, b = 56; 
	printf("GCD of %d and %d is %d : ", a, b, gcd(a, b)); 
	return 0; 
}
