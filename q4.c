#include <stdio.h>

int main()
{
    char a[5];
    
    scanf("%s", a);
   
    printf("%s\n", a);
   
    printf("pattern 1:");
   
    printf("%s\n", a + 1);
   
    printf("pattern 2:");

    printf("\n%s", a + 2);
   
    return 0;
}