#include <stdio.h>
int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n"); 
    int m1, n1, m2, n2;
    scanf("%d %d", &m1, &n1);
    int A[m1][n1];
    for (int i = 0; i < m1; i++)
        for (int j = 0; j < n1; j++)
            scanf("%d", &A[i][j]);
    scanf("%d %d", &m2, &n2);
    int B[m2][n2];
    for (int i = 0; i < m2; i++)
        for (int j = 0; j < n2; j++)
            scanf("%d", &B[i][j]);
    if (n1 != m2) {
        printf("Matrix multiplication not possible");
        return 0;
    }
    int C[m1][n2];
    for (int i = 0; i < m1; i++)
        for (int j = 0; j < n2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n1; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}
