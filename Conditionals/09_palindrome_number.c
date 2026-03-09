#include <stdio.h>
#include <string.h>

/*
C program for :-
Check whether a number is a palindrome or not
Author : Muhammad Areeb Shoaib
*/

int main()
{
    char str[100];
    char str2[100];
    char temp;    
    int decrease;
    int result;
    printf("Enter number : ");
    scanf("%s", str);

    if (str[0] == '-')
    {
        printf("Please enter positve number!");
        return 0;
    }

    strcpy(str2, str);

    int n = strlen(str);
    decrease = n - 1;

    for (int i = 0; i < n / 2; i++)
    {
        temp = str[i];
        str[i] = str[decrease];
        str[decrease] = temp;
        decrease--;
    }

    result = strcmp(str, str2);

    if (result == 0)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }

    return 0;
}