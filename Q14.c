/*Q14 (Conditional Statements)
Write a program to input a character and check whether it is a vowel or consonant using if�else.*/
#include <stdio.h>

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    char ch;

    
    printf("Enter a character: ");
    scanf("%c", &ch);

    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    }
     else 
    {
        printf("%c is a consonant.\n", ch);
    }
    getch();
    return 0;
}
