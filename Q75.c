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
    if (m1 == m2 && n1 == n2) 
    {
        int sum[m1][n1];
        for (int i = 0; i < m1; i++) 
        {
            for (int j = 0; j < n1; j++) 
            {
                sum[i][j] = A[i][j] + B[i][j];
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Matrix addition not possible");
        getch();
    return 0;
}
