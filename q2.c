#include <stdio.h>

int main()
{
    int data[5];
    printf("Enter elements of array: ");
    for (int i = 0; i < 5; ++i)
        scanf("%d", data + i);

    printf("Array in forward order: \n");
    for (int i = 0; i < 5; ++i)
        printf("%d ", *(data + i));
        
        printf("\nArray in backward order: \n");
    for (int i = 4; i >= 0; --i)
        printf("%d ", *(data + i));
    return 0;
}