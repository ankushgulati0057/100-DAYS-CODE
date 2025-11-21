#include <stdio.h>

enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    enum Days d;

    for (d = SUNDAY; d <= SATURDAY; d++) 
    {
        printf("%d -> ", d);

        switch (d) {
            case SUNDAY: printf("SUNDAY\n"); break;
            case MONDAY: printf("MONDAY\n"); break;
            case TUESDAY: printf("TUESDAY\n"); break;
            case WEDNESDAY: printf("WEDNESDAY\n"); break;
            case THURSDAY: printf("THURSDAY\n"); break;
            case FRIDAY: printf("FRIDAY\n"); break;
            case SATURDAY: printf("SATURDAY\n"); break;
        }
    }
    getch();
    return 0;
}
