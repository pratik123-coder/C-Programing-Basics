#include <stdio.h>

int main()
{
    char a[25];
    scanf("%s", a + 0);
    scanf("%s", a + 5);
    scanf("%s", a + 10);
    scanf("%s", a + 15);


    
    scanf("%s", a + 20);
    scanf("%s", a + 25);
    printf("%s %s  %s  %s  %s  %s", a + 0, a + 5, a + 10, a + 15, a + 20, a + 25);
    return 0;
}