#include <stdio.h>
/*
C program for :-
Find sum and average of array elements
Author : Muhammad Areeb Shoaib
*/
int main()
{

    int number;

    printf("Enter size of an array: ");
    scanf("%d", &number);

    int arr[number];
    float sum = 0;
    float average;

    for (int i = 0; i < number; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < number; j++)
    {
        sum += arr[j];
    }

    average = sum / number;

    printf("Sum of an array is %.0f\n", sum);
    printf("Averaage of an array is %.3f: ", average);

    return 0;
}