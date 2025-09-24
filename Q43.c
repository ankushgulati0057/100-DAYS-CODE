/*Q43 (Loops without Arrays/Strings)
Write a program to check if a number is a strong number.*/
#include <stdio.h>

int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n, temp, rem, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) 
    {
        rem = temp % 10;

        
        fact = 1;
        for (i = 1; i <= rem; i++) 
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == n)
        printf("%d is a Strong number.\n", n);
    else
        printf("%d is NOT a Strong number.\n", n);
    getch();
    return 0;
}
