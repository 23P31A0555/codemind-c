#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int z=b+c;
    int y=a+b;
    int x=a+c;
    if(b>a && c>a)
    {
        printf("%d
",z);
    }
    else if(a>c && b>c)
    {
        printf("%d
",y);
    }
    else if(a>b && c>b)
    {
        printf("%d
",x);
    }

}