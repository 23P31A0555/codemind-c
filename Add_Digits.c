#include<stdio.h>
int main()
{
    int n,sum=0,p;
    scanf("%d",&n);
    while(n/10!=0)
    {
        sum=0;
    
    while(n!=0)
    {
        p=n%10;
        sum=sum+p;
        n=n/10;
    }
    n=sum;
    }
    printf("%d",sum);
}