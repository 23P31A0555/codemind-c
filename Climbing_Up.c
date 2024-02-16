#include<stdio.h>
int main()
{
    int x,y,t;
    scanf("%d%d",&x,&y);
    t=x/y;
    int s=x%y;
    int sum=t+s;
    printf("%d",sum);
}