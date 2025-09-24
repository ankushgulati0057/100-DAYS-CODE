/*Q61 (Arrays (1D))
Search for an element in an array using linear search.*/

#include <stdio.h>

int main()
 {
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n, i, key, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the element to search: ");
    scanf("%d", &key);

    
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("%d found at position %d\n", key, i+1); // positions start from 1
    else
        printf("%d not found in the array\n", key);
    getch();
    return 0;
}
