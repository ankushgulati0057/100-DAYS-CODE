#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() 
{
      printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    struct Student s;

    
    printf("Enter student name: ");
    scanf("%49s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("\n--- Student Details ---\n");
    printf("Name      : %s\n", s.name);
    printf("Roll No   : %d\n", s.roll_no);
    printf("Marks     : %.2f\n", s.marks);
    getch();
    return 0;
}
