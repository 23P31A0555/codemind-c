#include<stdio.h>
int main()
{
    int a,b,i,r,sum=0,fact=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum=sum+i;
        }
    
    }
    for(i=1;i<b;i++)
    {
        if(b%i==0)
        {
            fact=fact+i;
        }
    }
    if(sum==b && fact==a)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}