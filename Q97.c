#include <stdio.h>
#include <string.h>

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        if (i == 0 || str[i-1] == ' ') {
            if (str[i] != ' ')
                printf("%c.", str[i]);
        }
        i++;
    }
    getch();
    return 0;
}
