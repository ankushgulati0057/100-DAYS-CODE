/*Q105 (Logic Enhancers)
Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ?n / 2? times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.*/
#include <stdio.h>
int main()
{
    int n;
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    printf("Enter size of array: ");
    scanf("%d", &n);
    int i;
    int nums[n];
    printf("Enter %d elements: ", n);
    for ( i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int count = 0, candidate = -1;

    
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate)
            count++;
        else
            count--;
    }
    count = 0;
    for (int i = 0; i < n; i++)
        if (nums[i] == candidate)
            count++;
    if (count > n / 2)
        printf("Majority element: %d\n", candidate);
    else
        printf("-1\n");
   getch();
    return 0;
}
