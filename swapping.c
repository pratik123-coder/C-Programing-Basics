#include<stdio.h>
int swap(int a, int *c, int *d,int *e,int *f)
{
    
    *c=a%10;
    *d=(a%1000)/100;
    *e=(a%100)/10;
    *f=a/1000;
}


int main()
{int no,b;
int c,d,e,f;
printf("enter a 4 digit no\n");

scanf("%d",&no);
b=swap(no,&c,&d,&e,&f);
printf("\n%d%d%d%d",c,d,e,f);    
    return 0;
}