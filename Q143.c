#include <stdio.h>

enum Result { LOW, AVERAGE, TOPPER };

struct Student {
    char name[50];
    int roll_no;
    float marks;
    enum Result status;
};

int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    struct Student s[5];
    int i, topIndex = 0;

    
    for (i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

   
    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    
    for (i = 0; i < 5; i++) {
        if (i == topIndex)
            s[i].status = TOPPER;
        else if (s[i].marks >= 60)
            s[i].status = AVERAGE;
        else
            s[i].status = LOW;
    }

  
    printf("\n----- Student With Highest Marks -----\n");
    printf("Name    : %s\n", s[topIndex].name);
    printf("Roll No : %d\n", s[topIndex].roll_no);
    printf("Marks   : %.2f\n", s[topIndex].marks);

    
    printf("Status  : ");
    switch (s[topIndex].status) {
        case TOPPER:  printf("TOPPER\n"); break;
        case AVERAGE: printf("AVERAGE\n"); break;
        case LOW:     printf("LOW\n"); break;
    }
   getch();
    return 0;
}
