#include <stdio.h>
int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n"); 
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int spaces = 0, digits = 0, special = 0, i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if (ch == ' ')
            spaces++;
        else if (ch >= '0' && ch <= '9')
            digits++;
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            ;
        else
            special++;
        i++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);
    getch();
    return 0;
}
