/*Q20 (Conditional Statements)
Write a program to display the day of the week based on a number (1–7) using switch-case.*/

#include <stdio.h>

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int day;

   
    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    
    switch(day) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid input! Enter a number between 1 and 7.\n");
    }
     getch();
    return 0;
}
