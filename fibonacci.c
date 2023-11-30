#include<stdio.h>
int main()
{
    int i,n,first=0,sec=1,next;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       printf("%d ",first);
       next=first+sec;
       first=sec;
       sec=next;
    }
}