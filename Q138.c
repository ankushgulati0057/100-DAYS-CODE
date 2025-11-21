#include <stdio.h>

enum Days { SUNDAY = 1, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    enum Days d;
    const char *names[] = { "", "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY" };

    for (d = SUNDAY; d <= SATURDAY; d++) {
        printf("%d -> %s\n", d, names[d]);
    }
      getch();
    return 0;
}
