/*Q37 (Loops without Arrays/Strings)
Write a program to find the LCM of two numbers.*/

#include <stdio.h>

int main()
 {
  printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int a, b, max, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    
    max = (a > b) ? a : b;

    
    while (1) {
        if (max % a == 0 && max % b == 0) {
            lcm = max;
            break;  
        }
        max++;  
    }

    printf("LCM of %d and %d is: %d\n", a, b, lcm);
     getch();
    return 0;
}
