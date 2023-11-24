#include<stdio.h>
int main()
{
    int i=1,n,r,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        c=c+1;
        n=n/10;
    }
    printf("%d",c);
}