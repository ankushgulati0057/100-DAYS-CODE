/*Q55 (Nested Loops without Arrays/Strings)
Write a program to print all the prime numbers from 1 to n.*/

#include <stdio.h>

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int i, j, n, isPrime;

    printf("Enter a number n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++) {   
        isPrime = 1;             

     
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;     
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    getch();
    return 0;
}
