/*Q28 (Loops without Arrays/Strings)
Write a program to print the product of even numbers from 1 to n.*/
#include <stdio.h>

#include <stdio.h>

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n,i;
    unsigned long long product = 1; 

    printf("Enter a positive number: ");
    scanf("%d", &n);

        for( i = 2; i <= n; i += 2) 
    {
        product *= i;
    }

   
    if (n < 2)
     {
        printf("No even numbers in the range 1 to %d.\n", n);
    } 
    else 
    {
        printf("Product of even numbers from 1 to %d = %llu\n", n, product);
    }
   getch();
    return 0;
}
