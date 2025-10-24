#include <stdio.h>
#include <string.h>
int main()
 {
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    char str1[1000], str2[1000];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int freq1[26] = {0}, freq2[26] = {0};
    int i = 0;

    while (str1[i] != '\0' && str1[i] != '\n') 
    {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            freq1[str1[i] - 'a']++;
        i++;
    }

    i = 0;
    while (str2[i] != '\0' && str2[i] != '\n') 
    {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            freq2[str2[i] - 'a']++;
        i++;
    }

    int flag = 1;
    for (i = 0; i < 26; i++) 
    {
        if (freq1[i] != freq2[i]) 
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Anagrams");
    else
        printf("Not anagrams");
    getch();
    return 0;
}
