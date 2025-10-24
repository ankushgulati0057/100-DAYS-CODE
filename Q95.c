#include <stdio.h>
#include <string.h>

int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    char str1[1000], str2[1000];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int len1 = 0, len2 = 0, i;
    while (str1[len1] != '\0' && str1[len1] != '\n') len1++;
    while (str2[len2] != '\0' && str2[len2] != '\n') len2++;

    if (len1 != len2) {
        printf("Not rotation");
        return 0;
    }

    char temp[2000];
    for (i = 0; i < len1; i++)
        temp[i] = str1[i];
    for (i = 0; i < len1; i++)
        temp[i + len1] = str1[i];
    temp[2*len1] = '\0';

    int flag = 0;
    for (i = 0; i <= 2*len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (temp[i + j] != str2[j])
                break;
        }
        if (j == len2) {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("Rotation");
    else
        printf("Not rotation");
   getch();
    return 0;
}
