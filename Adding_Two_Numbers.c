#include<stdio.h>
int add();
int main()
{
	int res=add();
	printf("%d",res);
}
int add()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int c=a+b;
	return c;
}