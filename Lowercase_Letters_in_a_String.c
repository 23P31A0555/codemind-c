#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char s[100];
    scanf("%[^
]s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            count++;
        }
    }
    printf("%d",count);
}