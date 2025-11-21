#include <stdio.h>#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person 
{
    char name[50];
    enum Gender gender;
};

int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter gender (0-MALE, 1-FEMALE, 2-OTHER): ");
    scanf("%d", &p.gender);

    printf("\nName: %s\n", p.name);

    if (p.gender == MALE)
        printf("Gender: Male\n");
    else if (p.gender == FEMALE)
        printf("Gender: Female\n");
    else if (p.gender == OTHER)
        printf("Gender: Other\n");
    else
        printf("Invalid gender\n");
   getch();
    return 0;
}
