#include<stdio.h>

int main()
{
    char str[20];
    gets(str);
    printf("%s", str);
    printf(sizeof(str));

    return 0;
}