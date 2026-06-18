#include <stdio.h>

/*
C program for :-
Function to swap two numbers (call by reference)
Author : Muhammad Areeb Shoaib
*/

void swap(int *number_1, int *number_2);
void swap(int *number_1, int *number_2)
{
    int temp;
    temp = *number_1;
    *number_1 = *number_2;
    *number_2 = temp;
    printf("num1: %d\n", *number_1);
    printf("num2: %d\n", *number_2);
}
int main()
{
    int num1;
    int num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter Second number: ");
    scanf("%d", &num2);

    swap(&num1, &num2);

    return 0;
}