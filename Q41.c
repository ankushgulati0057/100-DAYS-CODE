/*Q41 (Loops without Arrays/Strings)
Write a program to swap the first and last digit of a number.*/
#include <stdio.h>
#include <math.h>

int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n, first, last, digits = 0, temp, swapped;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = temp % 10; 

    
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    temp = n;
    first = temp / pow(10, digits - 1);  

    
    temp = temp % (int)pow(10, digits - 1); 
        temp = temp / 10;                        

    
    swapped = last * pow(10, digits - 1) + temp * 10 + first;

    printf("Number after swapping first and last digits: %d\n", swapped);
     getch();
    return 0;
}

