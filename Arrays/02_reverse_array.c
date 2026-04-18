#include <stdio.h>
/*
C program for :-
Reverse an array
Author : Muhammad Areeb Shoaib
*/
int main()
{
    int number;
    printf("Enter number of elements: ");
    scanf("%d", &number);

    int arr[number];

    printf("{");

    for (int i = 0; i < number; i++)
    {
        if (i == number - 1)
        {
            printf(" ");
        }
        else
        {
            printf(" ");

            printf(",");
        }
    }
    printf("}");
    printf("\n");

    for (int j = 0; j < number; j++)
    {
        printf("Enter %dth element: ", j + 1);
        scanf("%d", &arr[j]);
        printf("{");

        for (int k = 0; k < number; k++)
        {
            if (k == number - 1 && j == number - 1)
            {
                printf("%d", arr[k]);
            }
            else if (k == number - 1)
            {
                printf(" ");
            }

            else if (k <= j)
            {
                printf("%d", arr[k]);
                printf(",");
            }
            else
            {
                printf(" ");
                printf(",");
            }
        }
        printf("}\n");
    }

    for (int L = 0; L < number / 2; L++)
    {
        int temp = arr[L];
        arr[L] = arr[number - L - 1];
        arr[number - L - 1] = temp;
    }

    printf("Reverse array is : \n");

    printf("{");
    for (int m = 0; m < number; m++)
    {
        if (m == number - 1)
        {
            printf("%d", arr[m]);
        }
        else
        {

            printf("%d,", arr[m]);
        }
    }
    printf("}");
    return 0;
}