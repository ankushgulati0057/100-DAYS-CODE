/*Q33 (Loops without Arrays/Strings)
Write a program to check if a number is an Armstrong number.*/
#include <stdio.h>
#include <math.h>

  int main() 
  {
       printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n, temp, rem, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

  
    while (temp > 0) 
    {
        digits++;
        temp = temp / 10;
    }

    temp = n;

   
    while (temp > 0) {
        rem = temp % 10;
        sum = sum + pow(rem, digits);
        temp = temp / 10;
    }

    
    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is NOT an Armstrong number.\n", n);
     getch();
     return 0;
}
