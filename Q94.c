#include <stdio.h>
#include <string.h>
int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int maxLen = 0, len = 0, start = 0, maxStart = 0, i = 0;
    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
            start = i + 1;
        }
        if (str[i] == '\0' || str[i] == '\n')
            break;
        i++;
    }

    for (i = maxStart; i < maxStart + maxLen; i++)
        printf("%c", str[i]);
   getch();
    return 0;
}
