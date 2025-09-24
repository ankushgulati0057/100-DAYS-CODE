/*Q10 (User Inputs, Operations & Output)
Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/
#include <stdio.h>

int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int totalSeconds;
    int hours, minutes, seconds;

    
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

      printf("Time in HH:MM:SS format = %02d:%02d:%02d\n", hours, minutes, seconds);
      getch();

    return 0;
}
