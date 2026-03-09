#include <stdio.h>
/*
C program for :-
Calculate grade of student based on marks
Author : Muhammad Areeb Shoaib
*/
int main()
{
    int marks;
    printf("Enter Marks :");
    scanf("%d", &marks);
    
    if (marks < 0 || marks > 100)
    {
        printf("Invalid Marks Input!");
    }
    

    else if (marks >= 90 && marks <= 100)
    {
        printf("Congradulations you are passed with Grade A++");
    }

    else if (marks >= 80 && marks <= 89)
    {
        printf("Congradulations you are passed with Grade A");
    }

    else if (marks >= 70 && marks <= 79)
    {
        printf("Congradulations you are passed with Grade B ");
    }

    else if (marks >= 60 && marks <= 69)
    {
        printf("Congradulations you are passed with Grade C");
    }

    else if (marks >= 50 && marks <= 59)
    {
        printf("Congradulations you are passed with Grade D");
    }

    else
    {
        printf("You are Fail!");
    }

    return 0;
}