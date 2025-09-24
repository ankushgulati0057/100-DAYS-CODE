/*Q16 (Conditional Statements)
Write a program to input three numbers and find the largest among them using if–else.*/

#include <stdio.h>

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int a, b, c, largest;

    
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    
    if (a > b) 
    {
        if (a > c) 
        {
            largest = a;
        }
         else 
        {
            largest = c;
        }
    }
     else 
    {
        if (b > c) 
        {
            largest = b;
        } 
        else 
        {
            largest = c;
        }
    }

    printf("The largest number is %d\n", largest);
    getch();
    return 0;
}
