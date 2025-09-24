/*Q8 (User Inputs, Operations & Output)
Write a program to find and display the sum of the first n natural numbers.*/

#include <stdio.h>
int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n, sum = 0;
    int i;
   
    printf("Enter a positive number: ");
    scanf("%d", &n);

    
     for( i=1; i<= n; i++) 
    {
        sum += i;
    }
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    getch();

    return 0;
}
