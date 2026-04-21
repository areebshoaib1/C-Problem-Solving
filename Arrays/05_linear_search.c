#include <stdio.h>
#include <stdlib.h>
/*
C program for :-
Search an element in an Array (linear search)
Author : Muhammad Areeb Shoaib
*/
int main()
{
    int number;
    int number_2;
    int is_exist = 1;
    printf("Enter size of an array: ");
    scanf("%d", &number);

    int *arr = malloc(number * sizeof(int));

    for (int i = 0; i < number; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter number, which u want to search in an array: ");
    scanf("%d", &number_2);

    for (int j = 0; j < number; j++)
    {
        if (arr[j] == number_2)
        {
            printf("Element Exists!");
            is_exist = 0;
            break;
        }
    }

    if (is_exist)
    {
        printf("Element doesn't exist!");
    }

    free(arr);

    return 0;
}