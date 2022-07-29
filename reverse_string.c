#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf(" \n Enter a string to be reversed: ");
    scanf("%s", str);

    printf(" \n After the reverse of a string: %s ", strrev(str));
    return 0;
}