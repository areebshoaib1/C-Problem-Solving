#include <stdio.h>
/*
C program for :-
Find largest and smallest element in an array
Author : Muhammad Areeb Shoaib
*/
int main()
{
    int number;
    int n;
    printf("How many numbers u want to compare?: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid!");
        return 1;
    }
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int smallest = arr[0];

    for (int j = 1; j < n; j++)
    {
        if (arr[j] > largest)
        {
            largest = arr[j];
        }
        else if (arr[j] < smallest)
        {
            smallest = arr[j];
        }
    }

    printf("Largest number of an array is : %d\n", largest);
    printf("Smallest number of an array is : %d\n", smallest);

    return 0;
}