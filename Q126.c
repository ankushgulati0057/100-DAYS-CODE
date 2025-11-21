#include <stdio.h>

int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    FILE *fp;
    char filename[50];
    char line[200];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
     getch();
    return 0;
}
