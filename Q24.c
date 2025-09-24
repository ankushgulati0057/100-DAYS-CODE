/*24 Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ?5/unit 
Next 100 units at ?7/unit 
Next 100 units at ?10/unit 
Above at ?12/unit*/
#include <stdio.h>

int main()
 {
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int units;
    int bill = 0;

   
    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    
    if (units <= 100) {
        bill = units * 5;
    } 
    else if (units <= 200) {
        bill = 100 * 5 + (units - 100) * 7;
    } 
    else if (units <= 300) {
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    } 
    else {
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
    }

    
    printf("Electricity bill = ?%d\n", bill);
    getch();
    return 0;
}
