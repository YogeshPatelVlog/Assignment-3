#include <stdio.h>
int main()
{
    // Assignment-3 Ques-2 Impement a simple calcuator program that takes two numbers and operator (+,-,/,*) as input and performs correspoonding operations
    int a, b;
    char op;
    printf("Enter your operation : '+','-','/','*' : ");
    scanf("%c", &op);
    printf("Enter your first number : ");
    scanf("%d", &a);
    printf("Enter your second number : ");
    scanf("%d", &b);
    switch (op)
    {
    case '+':
        printf("Your sum a + b is : %d", a + b);
        break;
    case '-':
        printf("Your Subtraction is : %d", a - b);
        break;
    case '*':
        printf("Your multiplication is : %d", a * b);
        break;
    case '/':
        printf("Your Division is : %d", a / b);
        break;
    }
    return 0;
}