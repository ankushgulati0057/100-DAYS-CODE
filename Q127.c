#include <stdio.h>
#include <ctype.h>

int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    if (fp1 == NULL) {
        printf("Error opening input file!");
        return 1;
    }

    if (fp2 == NULL) {
        printf("Error opening output file!");
        fclose(fp1);
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("Conversion completed. Check output.txt\n");
   getch();
    return 0;
}
