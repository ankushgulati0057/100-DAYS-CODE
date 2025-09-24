/*Q39 (Loops without Arrays/Strings)
Write a program to find the product of odd digits of a number.*/
#include <stdio.h>

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n, rem, product = 1;
    int hasOdd = 0;  

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
     {
        rem = n % 10;       
        if (rem % 2 != 0) 
        { 
            product = product * rem;
            hasOdd = 1;     
        }
        n = n / 10;         
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");
   getch();
    return 0;
}
