#include<stdio.h>
int f1(int *b)

{
    int i,sum=0;
    for(i=0;i<6;i++)
{printf("%d",b[i]);
}
for(i=0;i<6;i++){
  if(b[i]%2==0)

{sum=sum+b[i];
}
else{printf("odd element");}


}
return sum;
}

int main()
{ int a[6]={2,3,4,5,6,8},b,i;
  b=f1(a);
  for(i=0;i<6;i++)
  {printf("\n%d",a[i]);
  }
  printf("\n%d",b);
    
    return 0;
}