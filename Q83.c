#include <stdio.h>
int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n"); 
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int vowels = 0, consonants = 0, i = 0;
    while (str[i] != '\0' && str[i] != '\n')
     {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
         {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                vowels++;
            else
                consonants++;
        }
        i++;
    }
    printf("Vowels=%d, Consonants=%d", vowels, consonants);
    getch();
    return 0;
}
