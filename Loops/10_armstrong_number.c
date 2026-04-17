#include <stdio.h>

int main()
{
    int number;
    int number_2;
    int remainder;
    int result = 0;
    int n = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    number_2 = number;

    while (number_2 != 0)
    {
        number_2 = number_2 / 10;
        n++;
    }

    number_2 = number;

    while (number_2 != 0)
    {
        remainder = number_2 % 10;
        int power = 1;
        for (int i = 0; i < n; i++)
        {
            power = power * remainder;
        }
        result = power + result;
        number_2 = number_2 / 10;
    }

    if (number == result)
    {
        printf("Number is Armstrong\n");
    }
    else
    {

        printf("Number is not Armstrong\n");
    }

    return 0;
}