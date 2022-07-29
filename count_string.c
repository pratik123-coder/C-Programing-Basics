#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "This Is Pratik";
    int count = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ')
            count++;
    }

    printf("Total number of characters in a string= %d", count);

    return 0;
}