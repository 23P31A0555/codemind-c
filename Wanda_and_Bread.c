#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int z=m*k;
    if(z>=n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}