/*Q13 (Conditional Statements)
Write a program to input a year and check whether it is a leap year or not using conditional statements.*/

#include <stdio.h>

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int year;

   
    printf("Enter a year: ");
    scanf("%d", &year);

   
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
    {
        printf("%d is a leap year.\n", year);
    } 
    else 
    {
        printf("%d is not a leap year.\n", year);
    }
    getch();
    return 0;
}
