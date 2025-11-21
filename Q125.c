#include <stdio.h>

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    FILE *fp;
    char filename[50];
    char text[200];

    printf("Enter file name: ");
    scanf("%s", filename);
    getchar(); 

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("Text appended successfully.\n");
     getch();
    return 0;
}
