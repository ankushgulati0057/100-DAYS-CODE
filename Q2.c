/* Q2 (User Inputs, Operations & Output)
Write a program to input two numbers and display their sum, difference, product, and quotient.*/
#include <stdio.h>
int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int a, b;
    
   
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
   
    printf("\nSum = %d", a + b);
    printf("\nDifference = %d", a - b);
    printf("\nProduct = %d", a * b);
    printf("\nQuotient = %d\n", a / b); 
    getch();

    return 0;
}
