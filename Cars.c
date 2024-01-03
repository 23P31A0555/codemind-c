#include<stdio.h>
int main()
{
    int n,x,y,z;
    scanf("%d",&n);
    x=n/4;
    y=n%4;
    if(y==0)
    {
        printf("%d",x);
    }
    else if(y==1 || y==2 || y==3)
    {
        z=x+1;
        printf("%d",z);
    }
    


}