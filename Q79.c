#include <stdio.h>
int main() 
{
     printf("Name-ANKUSH GULATI\nSAP ID-590020801\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n"); 
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (int d = 0; d < m + n - 1; d++) 
    {
        int r = (d < n) ? 0 : d - n + 1;
        int c = (d < n) ? d : n - 1;
        while (r < m && c >= 0) {
            printf("%d ", a[r][c]);
            r++;
            c--;
        }
    }
    getch();
    return 0;
}
