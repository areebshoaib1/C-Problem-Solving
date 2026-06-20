#include <stdio.h>
/*
C program for :-
Sum of array elements using pointers
Author : Muhammad Areeb Shoaib
*/
int main()
{
    int arr[5] = {1, 3, 5, 7, 9};
    int *ptr = arr;
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += *ptr;
        ptr++;
    }

    printf("Sum of an array is %d ", sum);

    return 0;
}