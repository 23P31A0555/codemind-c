#include<stdio.h>
int main()
{
    int a,b,x,y,c,d;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    c=(a*60)/x;
    d=(b*60)/y;
    if(c<d)
    {
        printf("Walter");
    }
    else if(c>d)
    {
        printf("Jesse");
    }
    else
    {
        printf("Both");
    }
}