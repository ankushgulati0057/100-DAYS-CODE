#include <stdio.h>

enum Role { ADMIN = 1, USER, GUEST };

int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    enum Role r;
    printf("Enter role (1-ADMIN, 2-USER, 3-GUEST): ");
    scanf("%d", &r);

    switch (r) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! You have view-only access.\n");
            break;

        default:
            printf("Invalid role.\n");
    }

    return 0;
}
