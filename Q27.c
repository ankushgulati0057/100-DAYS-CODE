/*Q27 (Loops without Arrays/Strings)
Write a program to print the sum of the first n odd numbers.*/
#include <stdio.h>

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n, i, sum = 0;

 
    printf("Enter a positive number: ");
    scanf("%d", &n);

    
    for(i = 1; i <= 2*n; i += 2) 
    {
        sum += i;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);
    getch();
    return 0;
}

