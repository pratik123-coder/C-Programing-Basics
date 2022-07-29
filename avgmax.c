#include<stdio.h>
int f(int x,int y,int *c,int *d)
{
    int t;
    t=(x+y)/2;
    if(x<y)
    {  
        *c=y;
    }
    else{ 
        *c=x;
    }
    if(x>y)
    { *d=y;
    }
    else {
        *d=x;
        
    }
    
    return t;
}
int main()
{
 int a=2,b=4,e;
 int c,d;
 e=f(a,b,&c,&d);
printf("average:%d\n",e);
printf("largest:%d\n",c);
printf("minimum:%d",d);



    return 0;
}
