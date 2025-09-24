/*Q23 (Conditional Statements)
Write a program to calculate library fine based on late days as follows: 
First 5 days late: ?2/day 
Next 5 days late: ?4/day 
Next 20 days days late: ?6/day 
More than 30 days: Membership Cancelled.*/

#include <stdio.h>

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int daysLate;
    int fine = 0;

    
    printf("Enter number of days late: ");
    scanf("%d", &daysLate);

    
    if (daysLate <= 5) {
        fine = daysLate * 2;
        printf("Library fine = ?%d\n", fine);
    } 
    else if (daysLate <= 10) {
        fine = 5 * 2 + (daysLate - 5) * 4;
        printf("Library fine = ?%d\n", fine);
    } 
    else if (daysLate <= 30) {
        fine = 5 * 2 + 5 * 4 + (daysLate - 10) * 6;
        printf("Library fine = ?%d\n", fine);
    } 
    else {
        printf("Membership Cancelled!\n");
    }
   getch();
    return 0;
}
