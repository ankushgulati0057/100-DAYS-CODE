/*Q36 (Loops without Arrays/Strings)
Write a program to find the HCF (GCD) of two numbers.*/
#include <stdio.h>

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int a, b, i, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

   
    int min = (a < b) ? a : b;

    
    for (i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;  
        }
    }

    printf("HCF (GCD) of %d and %d is: %d\n", a, b, hcf);
    getch();
    return 0;
}
