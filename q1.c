#include <stdio.h>

int main()
{
     int a[5],i;


    printf("Enter elements: ");
    for (i = 0; i < 5; ++i)
        scanf("%d", a + i);

    printf("You entered: \n");
    for (i = 0; i < 5; ++i)
        printf("%d", *(a + i)); 
        for(i=5;i>0;--i)
        printf("%d",*(a+i));
    return 0;
}