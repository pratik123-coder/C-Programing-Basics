#include<stdio.h>
void naturalnum(int a)
{
    if(a !=0)
        naturalnum(a-1);
    else
        return;

    printf("%d\n", a);
}

int main()
{
    int a=10;

    printf("\nFirst 10 Natural Numbers are ");
    naturalnum(a);

    return 0;
}

