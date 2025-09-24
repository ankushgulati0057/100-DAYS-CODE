/*Q35 (Loops without Arrays/Strings)
Write a program to print all factors of a given number.*/

#include <stdio.h>

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    getch();
    return 0;
}
