#include <stdio.h>

int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    FILE *src, *dest;
    char srcFile[50], destFile[50];
    int ch;

    printf("Enter source file name: ");
    scanf("%s", srcFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    src = fopen(srcFile, "r");
    dest = fopen(destFile, "w");

    if (src == NULL) {
        printf("Error opening source file!");
        return 1;
    }

    if (dest == NULL) {
        printf("Error opening destination file!");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");
    getch();
    return 0;
}
