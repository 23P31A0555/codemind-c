#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b;
    scanf("%d%d",&a,&b);
    float n,sum=0;
    for(i=a;i<=b;i++)
    {
        n=sqrt(i);
        sum=sum+n;
    
    }
    printf("%.2f",sum);
}