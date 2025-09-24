/*Q42 (Loops without Arrays/Strings)
Write a program to check if a number is a perfect number.*/
#include <stdio.h>

int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

   
    if (sum == n)
        printf("%d is a Perfect number.\n", n);
    else
        printf("%d is NOT a Perfect number.\n", n);
    getch();
    return 0;
}
