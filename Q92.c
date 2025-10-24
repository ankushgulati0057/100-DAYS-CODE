#include <stdio.h>
int main()
 {
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    char str[1000];
    int freq[26] = {0};
    fgets(str, sizeof(str), stdin);
    int i = 0;
    char repeat = '\0';
    while (str[i] != '\0' && str[i] != '\n') 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) 
            {
                repeat = str[i];
                break;
            }
        }
        i++;
    }
    if (repeat)
        printf("%c", repeat);
    else
        printf("No repeating character");
        getch();
    return 0;
}
