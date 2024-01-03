#include<stdio.h>
int main()
{
    int x,a;
    scanf("%d",&x);
    a=x/10;
    if(x%10==0)
    {
        printf("%d",a);
    }
    else if(x%5==0)
    {
      printf("%d",a+1);
    }
    else
    {
        printf("-1");
    }
}