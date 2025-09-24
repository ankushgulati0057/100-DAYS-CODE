/*Q56 (Arrays (1D))
Read and print elements of a one-dimensional array.*/
#include <stdio.h>

#include <stdio.h>

int main()
 {
           printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    getch();
    return 0;
}

    

