#include <stdio.h>
int arr(int x)
{

    int a = 0;
    while (x > 0)
    {r
        a++;
        x = x / 10;
    }
    return a;
}
int box(int x, int y)
{
    int b = 1;
    for (int i = 0; i < y; i++)
    {
        b = b * x;
    }
    return b;
}

int main()
{
    int c;
    printf("Enter the number to be entered - ");
    scanf("%d", &c);
    int d = c;
    int a = arr(c);
    int z = 1;
    int e, f;
    printf("Enter the number of row -x - ");
    scanf("%d", &e);
    printf("Enter the number of column -y - ");
    scanf("%d", &f);
    int b[e][f], b1[a];
    for (int i = 0; i < a; i++)
    {
        int pp = d % 10;
        b1[i] = pp;
        d = d / 10;
    }
    d = c;
    for (int i = 0; i < e; i++)
    {
        for (int j = 0; j < f; j++)
        {
            if (z <= a)
            {
                int fd = b1[a - z];
                b[i][j] = fd;
                z++;
            }
            else if (z > a)
            {
                int bk = b1[z - a - 1];
                b[i][j] = bk;
                z = (z >= (2 * a)) ? 1 : z + 1;
            }
        }
    }
    printf("Element - \n\n");
    for (int i = 0; i < e; i++)
    {
        for (int m = 0; m < e; m++)
        {
            printf("%d ", b[i][m]);
        }
        printf("\n");
    }
}