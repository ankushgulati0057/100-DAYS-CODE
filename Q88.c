#include <stdio.h>
int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ')
            str[i] = '-';
        i++;
    }
    printf("%s", str);
    getch();
    return 0;
}
