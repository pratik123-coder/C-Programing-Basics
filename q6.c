#include<stdio.h>

int main()
{int arr[100],i,n, temp;

    scanf("%d", &n);

    
    printf("Enter %d numbers:\n", n);
    for(i=0;i< n;i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", (arr+i));
    }

    printf("\nOriginal array is: \n");
    for(i=0;i< n;i++)
    {
        printf(" %d\t", *(arr+i));
    }

    for(i=0;i< n/2;i++)
    {
        temp = *(arr + i);
        *(arr + i) = *(arr + n -1 -i);
        *(arr + n -1 -i) = temp;
    }

    printf("\nReversed array is: \n");
    for(i=0;i< n;i++)
    {
        printf(" %d\t", *(arr+i));
    }
    
    return 0;
}