#include<stdio.h>
int main()
{
    int n,fd,ld,sum=0;
    scanf("%d",&n);
    ld=n%10;
    while(n!=0)
    {
        fd=n;
        n=n/10;
    }
        sum=ld+fd;
    printf("%d",sum);
}