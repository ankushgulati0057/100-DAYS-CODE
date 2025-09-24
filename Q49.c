/*Q49 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
5
45
345
2345
12345
*/
#include <stdio.h>

int main()
 {
          printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int i, j;
    int n = 5; 

    for (i = n; i >= 1; i--) {           
        for (j = i; j <= n; j++) {       
            printf("%d", j);
        }
        printf("\n"); 
    }
    getch();
    return 0;
}
