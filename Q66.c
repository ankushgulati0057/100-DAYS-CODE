/*Q66 (Arrays (1D))
Insert an element in a sorted array at the appropriate position.*/
#include <stdio.h>

int main()
 {
            printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n, i, key, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; 

   
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the element to insert: ");
    scanf("%d", &key);

    
    pos = n;
    for (i = 0; i < n; i++) {
        if (arr[i] > key) {
            pos = i;
            break;
        }
    }

   
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

  
    arr[pos] = key;
    n++; 
   
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
   getch();
    return 0;
}
