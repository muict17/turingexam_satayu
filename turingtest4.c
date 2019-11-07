#include<stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d %d",&n ,&m);
    int matrix[n][m];
    int trans[m][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            trans[j][i] = matrix[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}