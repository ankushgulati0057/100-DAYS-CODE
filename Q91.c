#include <stdio.h>
int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    char str[1000], result[1000];
    fgets(str, sizeof(str), stdin);
    int i = 0, j = 0;
    while (str[i] != '\0' && str[i] != '\n') 
    {
        char ch = str[i];
        if (!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))
         {
            result[j++] = ch;
        }
        i++;
    }
    result[j] = '\0';
    printf("%s", result);
    getch();
    return 0;
}
