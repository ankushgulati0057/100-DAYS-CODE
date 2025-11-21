#include <stdio.h>
#include <ctype.h>
int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 1;
    int inWord = 0;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (!isspace(ch) && inWord == 0) {
            words++;
            inWord = 1;
        } else if (isspace(ch)) {
            inWord = 0;
        }
    }

    fclose(fp);

    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);
   getch();
    return 0;
}
