#include <stdio.h>

int main()
{
    int  c[3][3], i, j, k;
    int sum = 0;
    int a[3][3] = 
    {
        {0, 1, 2},
        {4, 5, 6},
        {8, 9, 1},
    };
    int b[3][3] = 
    {
        {0, 1, 2},
        {4, 3, 9},
        {8, 9, 1},
    };
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            sum = 0;
            for (k = 0; k <= 2; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }

    printf("\nMultiplication Of Two Matrices : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d ", c[i][j]);
        }
        printf("\n");
    }

    return (0);
}

