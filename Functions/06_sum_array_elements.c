#include <stdio.h>
#include <stdlib.h>

/*
C program for :-
Function to find sum of array elements
Author : Muhammad Areeb Shoaib
*/

void sum_of_array(int array[], int count);
void sum_of_array(int array[], int count)
{
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += array[i];
    }
    printf("Sum of an array is: %d", sum);
}

int main()
{
    int n;
    printf("Enter size of an array: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number: ", i+1);
        scanf("%d", &arr[i]);
    }

    sum_of_array(arr, n);

    free(arr);
    return 0;
}