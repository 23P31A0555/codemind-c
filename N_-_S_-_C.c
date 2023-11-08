#include<stdio.h>
int main()
{
    int i,a,b,sq,cu;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        sq=i*i;
        cu=i*i*i;
        printf("%d ",i);
        printf("%d ",sq);
        printf("%d
",cu);
    }
    
    
}