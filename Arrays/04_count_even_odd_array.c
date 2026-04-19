#include <stdio.h>
#include <stdlib.h>
/*
C program for :-
Count even and odd numbers in array
Author : Muhammad Areeb Shoaib
*/
int main()
{
    int number;
    printf("Enter size of an array: ");
    scanf("%d", &number);

    int *arr = malloc(number * sizeof(int));

    for (int i = 0; i < number; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Even numbers of an array are: \n");

    for (int j = 0; j < number; j++)
    {
        if (arr[j] % 2 == 0)
        {
            printf("%d ", arr[j]);
        }
    }
    printf("\n");

    printf("Odd numbers of an array are: \n");

    for (int k = 0; k < number; k++)
    {
        if (arr[k] % 2 != 0)
        {
            printf("%d ", arr[k]);
        }
    }
    free(arr);

    return 0;
}