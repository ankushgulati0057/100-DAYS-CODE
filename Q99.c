#include <stdio.h>
int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    char date[20];
    scanf("%s", date);
    char day[3], month[3], year[5];
    int i = 0, j = 0;

    
    day[0] = date[i++];
    day[1] = date[i++];
    day[2] = '\0';
    i++; 

    
    month[0] = date[i++];
    month[1] = date[i++];
    month[2] = '\0';
    i++; 
   
    j = 0;
    while (date[i] != '\0') {
        year[j++] = date[i++];
    }
    year[j] = '\0';

    
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int m = (month[0]-'0')*10 + (month[1]-'0');

    printf("%s-%s-%s", day, months[m-1], year);
    getch();
    return 0;
}
