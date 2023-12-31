#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int arr[m][n],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int c;
    for(j=0;j<n;j++)
    {
        c=0;
        for(i=0;i<m;i++)
        {
            c=c+arr[i][j];
        }
        printf("%d ",c);
    }
}