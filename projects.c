#include <stdio.h>

int main()
{
    char operator;
    double num 1;
    double num 2;
    double num3 ;
    printf( "\nEnter an operator (+-*/):")
    scanf("%c", &operator)

    printf( "\nEnter number 1:")
    scanf("%lf", &num1)

     printf( "\nEnter number 2:")
    scanf("%lf", &num2)

    printf( "\nEnter number 3:")
    scanf("%lf", &num3)

switch (operator)
{
case '+':
    result = num1 + num2;
    printf("\nresults : %lf", result);
    break;
case '-':
    result = num1 -num2;
    printf("\nresults : %lf", result);
    break;
case '*':
    result = num1 * num2;
    printf("\nresults : %lf", result);
    break;
case '/':
    result = num1 / num2;
    printf("\nresults : %lf", result);
    break;

default:
    printf("%c is not valid", operator);
    break;
}
    return(0);
}