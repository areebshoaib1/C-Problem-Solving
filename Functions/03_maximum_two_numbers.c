#include <stdio.h>

/*
C program for :-
Function to find maximum of two numbers
Author : Muhammad Areeb Shoaib
*/

int Maximum(int num1, int num2);
int Maximum(int num1, int num2)
{

    int max = num1 > num2 ? num1 : num2;
    return max;
}

int main()
{
    int number1;
    printf("Enter 1st number: ");
    scanf("%d", &number1);

    int number2;
    printf("Enter 2nd number: ");
    scanf("%d", &number2);

    printf("Greater number is: %d", Maximum(number1, number2));

    return 0;
}