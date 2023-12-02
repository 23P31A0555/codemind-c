#include<stdio.h>
int main()
{
    int i,n,r,fact=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            fact=fact+i;
        }
    }
    if(fact==n)
    {
        printf("PERFECT");
    }
    else if(fact<n)
    {
        printf("DEFICIENT");
    }
    else if(fact>n)
    {
        printf("ABUNDANT");
    }
}