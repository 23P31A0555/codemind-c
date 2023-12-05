#include<stdio.h>
int main()
{
    int i,n,sum=0,p,q,s=0,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        p=i*i;
        q=sum*sum;
        s=s+p;
        r=q-s;
    }
    printf("%d",r);
}