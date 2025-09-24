/*Q46 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*****
*****
*****
*****
******/
#include <stdio.h>

int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int i, j;
    int n = 5; 

    for (i = 1; i <= n; i++)  
    {      
        for (j = 1; j <= n; j++) 
        {   
            printf("*");
        }
        printf("\n"); 
    }
   getch();
    return 0;
}
