#include <stdio.h>
enum Menu { ADD = 1, SUBTRACT, MULTIPLY };
int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    enum Menu choice;
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1.ADD\n2.SUBTRACT\n3.MULTIPLY\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) 
    {
        case ADD:
            printf("Result = %d\n", a + b);
            break;

        case SUBTRACT:
            printf("Result = %d\n", a - b);
            break;

        case MULTIPLY:
            printf("Result = %d\n", a * b);
            break;

        default:
            printf("Invalid choice\n");
    }
    getch;
    return 0;
}
