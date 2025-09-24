/*Q40 (Loops without Arrays/Strings)
Write a program to find the 1’s complement of a binary number and print it.*/
#include <stdio.h>

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    long long bin, onesComp = 0;
    int rem, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &bin);

    while (bin > 0) {
        rem = bin % 10;          
        if (rem == 0)
            onesComp = onesComp + (1 * place); 
                    else
            onesComp = onesComp + (0 * place); 

        bin = bin / 10;          
        place = place * 10;      
    }

    printf("1's Complement = %lld\n", onesComp);
   getch();
    return 0;
}

