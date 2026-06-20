#include <stdio.h>
/*
C program for :-
Access array elements using pointers
Author : Muhammad Areeb Shoaib
*/
int main()
{
    int arr[5] = {2, 4, 6, 8, 10};

    int *ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        printf("%d element = %d\n", i, *ptr);
        ptr++;
    }

    return 0;
}