
/*Q69 (Arrays (1D))
Find the second largest element in an array.*/
#include <stdio.h>

int main() 
 {
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least 2 elements!\n");
        return 0;
    }

    int arr[n];

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first, second;

    
    first = second = -2147483648; 

    
    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == -2147483648) 
    {
        printf("There is no second largest element (all elements may be equal).\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }
      getch();
    return 0;
}
