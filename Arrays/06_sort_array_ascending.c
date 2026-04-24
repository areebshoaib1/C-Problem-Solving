#include <stdio.h>
#include <stdlib.h>
/*
C program for :-
Sort an array (ascending order)
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
        printf("Enter %d element of an array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < number - 1; j++)

    {

        for (int k = 0; k < number - j - 1; k++)
        {

            if (arr[k] > arr[k + 1])
            {
                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
    printf("Sorted array in assending order: \n");

    for (int m = 0; m < number; m++)
    {
        printf("%d ", arr[m]);
    }

    free(arr);

    return 0;
}