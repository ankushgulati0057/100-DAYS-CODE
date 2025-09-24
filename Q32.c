/*Q32 (Loops without Arrays/Strings)
Write a program to check if a number is a palindrome.*/
#include <stdio.h>

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n, temp, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

   
    while (temp > 0) {
        rem = temp % 10;          
        rev = rev * 10 + rem;     
        temp = temp / 10;        
    }

   
   
    if (n == rev)
        printf("%d is a Palindrome number.\n", n);
    else
        printf("%d is NOT a Palindrome number.\n", n);
    getch();
    return 0;
}
