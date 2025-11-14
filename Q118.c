#include <stdio.h>

int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int total = n * (n + 1) / 2;
    int sum = 0;

    for(int i = 0; i < n; i++)
        sum += arr[i];

    printf("%d", total - sum);
    return 0;
}
