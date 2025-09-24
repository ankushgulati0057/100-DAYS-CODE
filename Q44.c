/*Q44 (Loops without Arrays/Strings)
Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.*/
#include <stdio.h>

int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n, i;
    double sum = 0.0;
    double numerator = 1, denominator = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += numerator / denominator;

        
        numerator += 2;
        denominator += 2;
    }

    printf("Sum of the series up to %d terms = %.2lf\n", n, sum);
    getch();
    return 0;
}
