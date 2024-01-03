#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a+b;
    if(c>=11)
    {
        printf("%d",21-c);
    }
    else
    {
        printf("-1");
    }
    
}