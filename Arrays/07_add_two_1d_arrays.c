#include <stdio.h>
#include <stdlib.h>
/*
C program for :-
Write a C program to add two one-dimensional arrays. If the arrays are of different sizes, assume the missing elements of the smaller array as 0.
Author : Muhammad Areeb Shoaib
*/
int main()
{
    int arr[7] = {3, 4, 5, 6, 2, 5, 7};
    int arr_2[5] = {2, 5, 6, 7, 8};

    int n1 = sizeof(arr) / sizeof(arr[0]);
    int n2 = sizeof(arr_2) / sizeof(arr_2[0]);

    int n3 = (n1 < n2) ? n1 : n2;
    int n4 = (n1 > n2) ? n1 : n2;

    int *arr_3 = malloc(n4 * sizeof(int));

    for (int i = 0; i < n4; i++)
    {
        if (i < n3)
        {

            arr_3[i] = arr[i] + arr_2[i];
        }
        else if (n1 > n2)
        {
            arr_3[i] = arr[i];
        }
        else
        {
            arr_3[i] = arr_2[i];
        }
    }

    for (int j = 0; j < n4; j++)
    {

        printf("%d ", arr_3[j]);
    }

    free(arr_3);

    return 0;
}