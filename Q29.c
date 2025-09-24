/*Q29 (Loops without Arrays/Strings)
Write a program to calculate the factorial of a number.*/
#include <stdio.h>

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int i,n;
   long factorial = 1; 
  
    printf("Enter a positive integer: ");
    scanf("%d", &n);

   
   
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for( i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }
    getch();
    return 0;
}
