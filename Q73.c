#include <stdio.h>
int main() 
{
    printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int m, n;
    scanf("%d %d", &m, &n);

    int matrix[m][n], rowSum[m];

    
    for (int i = 0; i < m; i++) 
    {
        rowSum[i] = 0; 
        for (int j = 0; j < n; j++)
         {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

   
    for (int i = 0; i < m; i++) {
        printf("%d ", rowSum[i]);
    }
    getch();
    return 0;
}
