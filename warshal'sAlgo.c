#include <stdio.h>
#include <stdlib.h>

int warshall(int n, int mat[n][n], int c)
{
    int i, j, flag;

    if (c == n)
    {
        for (i = 0; i < n; i++)
        {
            flag = 1;
            for (j = 0; j < n; j++)
            {
                if (mat[i][j] == 0)
                    flag = 0;
            }
            if (flag == 1)
                return 1;
        }
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((mat[i][j] == 1) || (mat[i][c] == 1 && mat[c][j] == 1))
                mat[i][j] = 1;
        }
    }

    return warshall(n, mat, c + 1);
}

void main()
{

    int i, j, n, a;
    printf("Enter number of vertices ");
    scanf("%d", &n);

    int adjMat[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter a[%d][%d]\n ", i, j);
            scanf("%d", &a);
            adjMat[i][j] = a;
        }
    }

    if (warshall(n, adjMat, 0) == 1)
    {
        printf("The matrix exhibits transitive closure.\n");
        for (int i = 0; i < n; i++)
        {
            printf("\n");
             for (int j = 0; j < n; j++)
            {
                printf("%d\n", adjMat[i][j]);
            }
        }
    }
    else
    {
        printf("The matrix does not exhibit transitive closure.\n");
    }
}
