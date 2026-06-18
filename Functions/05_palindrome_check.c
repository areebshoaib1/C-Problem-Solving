#include <stdio.h>
#include <string.h>

/*
C program for :-
Function to check palindrome
Author : Muhammad Areeb Shoaib
*/

void palindrome(char string[]);
void palindrome(char string[])
{
    char str_2[100];
    strcpy(str_2, string);
    int count = strlen(string);

    for (int i = 0; i < count / 2; i++)
    {
        int temp = string[i];
        string[i] = string[count - i - 1];
        string[count - i - 1] = temp;
    }
    
    int check = strcmp(str_2, string);
    if (check)
    {
        printf("Non-Palindrome\n");
    }
    else
    {
        printf("Palindrome\n");
    }
}

int main()
{
    char str[100];

    printf("Enter input: ");
    scanf("%s", str);
    palindrome(str);

    return 0;
}