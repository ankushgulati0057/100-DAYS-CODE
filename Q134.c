#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    enum Status s;
    printf("Enter status (0-SUCCESS, 1-FAILURE, 2-TIMEOUT): ");
    scanf("%d", &s);

    if (s == SUCCESS)
        printf("Operation completed successfully\n");
    else if (s == FAILURE)
        printf("Operation failed\n");
    else if (s == TIMEOUT)
        printf("Operation timed out\n");
    else
        printf("Invalid status\n");
    getch();
    return 0;
}
