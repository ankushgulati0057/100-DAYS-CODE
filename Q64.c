/*Q64 (Arrays (1D))
Find the digit that occurs the most times in an integer number.*/
#include <stdio.h>

int main() 
{
      printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    long long n;
    int count[10] = {0}; 
    int rem, i, max = 0, digit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &n);

  
    if (n < 0)
     {
        n = -n;
    }


    while (n > 0) {
        rem = n % 10;
        count[rem]++;
        n = n / 10;
    }

   
    for (i = 0; i < 10; i++) 
    {
        if (count[i] > max) 
        {
            max = count[i];
            digit = i;
        }
    }

    printf("Digit that occurs the most: %d (occurs %d times)\n", digit, max);
     getch();
    return 0;
}

