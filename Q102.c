/*Q102 (Logic Enhancers)
Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.*/
#include <stdio.h>

int findCeilIndex(int arr[], int n, int x)
{
  
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] >= x)
        {
            result = mid;      
            high = mid - 1;    
        }
        else
        {
            low = mid + 1;     
        }
    }

    return result;
}

int main()
{
    int n, x, i;
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    int index = findCeilIndex(arr, n, x);

    printf("%d\n", index);
    getch();
    return 0;
}

