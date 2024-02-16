#include<stdio.h>
int main()
{
    int x,y,sum,a;
    scanf("%d%d",&x,&y);
    sum=(500-2*x)+(1000-4*(x+y));
    a=(500-2*(x+y))+(1000-4*y);
    if(sum>a)
    {
    printf("%d",sum);
    }
    else
    {
        printf("%d",a);
    }
}