#include <stdio.h>
#include <string.h>

int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int i = 0, lastSpace = -1;

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ')
            lastSpace = i;
        i++;
    }

    i = 0;
    while (i < lastSpace) {
        if (i == 0 || str[i-1] == ' ') {
            if (str[i] != ' ')
                printf("%c.", str[i]);
        }
        i++;
    }

    if (lastSpace != -1) {
        printf(" ");
        for (i = lastSpace + 1; str[i] != '\0' && str[i] != '\n'; i++)
            printf("%c", str[i]);
    }
    getch();
    return 0;
}
