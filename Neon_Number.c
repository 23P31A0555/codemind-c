#include<stdio.h>
int main()
{
    int n,r,res,sum=0;
    scanf("%d",&n);
    res=n*n;
    while(res!=0)
    {
        r=res%10;
        sum=sum+r;
        res=res/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}