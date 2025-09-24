/*Q70 (Arrays (1D))
Rotate an array to the right by k positions.*/
#include <stdio.h>

int main() 
{
      printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n, k, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (number of positions to rotate): ");
    scanf("%d", &k);

   
    k = k % n;

    printf("Array after right rotation by %d positions:\n", k);

    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[(n - k + i) % n]);
    }
    printf("\n");
    getch();
    return 0;
}
