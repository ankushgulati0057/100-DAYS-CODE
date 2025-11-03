/*Q104 (Logic Enhancers)
Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    double val = (n * (n + 1)) / 2.0;
    int x = sqrt(val);

    if (x * x == val)
        printf("%d\n", x);
    else
        printf("-1\n");
    getch();
    return 0;
}
