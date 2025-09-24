/*Q68 (Arrays (1D))
Delete an element from an array.*/
#include <stdio.h>

int main() 
{
      printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n, i, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        
        for (i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) 
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
      getch();
    return 0;
}
