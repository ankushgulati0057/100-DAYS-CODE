#include <stdio.h>
#include <ctype.h>

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    char str[200];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[0] = toupper(str[0]);
    for (i = 1; str[i] != '\0'; i++) 
    {
        str[i] = tolower(str[i]);
    }

    printf("Sentence case: %s", str);
    getch();
    return 0;
}
