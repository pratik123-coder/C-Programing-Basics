#include <stdio.h>
#include <string.h>

int x = 0;

void reverse(char st[20], int n)
{
    char temp;
    temp = st[x];
    st[x] = st[n - 1];
    st[n - 1] = temp;
    if (x < n / 2)
    {
        ++x;
        reverse(st, --n);
    }
    else
    {
        printf("Reversed String = %s", st);
    }
}
int main()
{
    char str[20];
    int n;
    printf("Enter the String :\n");
    scanf("%s", str);
    n = strlen(str);
    reverse(str, n);
    return 0;
}
