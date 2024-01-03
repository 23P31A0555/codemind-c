#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    z=x+2*y;
    if((x==0 && y%2!=0) || (y==0 && x%2!=0) || z%2!=0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}