/*Q31 (Loops without Arrays/Strings)
Write a program to take a number as input and print its equivalent binary representation.*/
#include <stdio.h>

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n, temp, rem, place = 1;
    long long binary = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        rem = temp % 2;
        binary = rem * place + binary;
        temp = temp / 2;
        place = place * 10;
    }
    printf("Binary representation of %d is: %lld\n", n, binary);
    getch();
    return 0;
}
