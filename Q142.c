#include <stdio.h>

struct Student 
{
    char name[50];
    int roll_no;
    float marks;
};
int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    struct Student s[5];
    int i;

    
    for(i = 0; i < 5; i++) 
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

   
    printf("\n\n----- Student Details -----\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name    : %s\n", s[i].name);
        printf("Roll No : %d\n", s[i].roll_no);
        printf("Marks   : %.2f\n", s[i].marks);
    }
    getch();
    return 0;
}
