#include <stdio.h>

int main()
{
    /*With Spaces
    char str[20];
    gets(str);
    printf("%s", str);
    return 0;
    Without Spaces
    */
    char str[1000];
    int i, j, variable;
    printf("Enter a String: ");
    gets(str);
    while(str[i]!='\0')
    {
        variable=0;
        if(str[i]==' ')
        {
            i=j;
            while(str[j-1]!='\0')
            {
                str[j] = str[j+1];
                j++;
                
            }
            variable = 1;
        }
        if(variable==0)
            i++;
    }
    printf("\nString (without spaces)= %s", str);
    return 0;
    
}