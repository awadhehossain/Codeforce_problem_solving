#include<stdio.h>
int main()
{
    int a,b;
    char s;
    scanf("%d %c %d",&a,&s,&b);
    if(s=='+')
    {
        printf("%d",a+b);
    }
    else if(s=='-')
    {
        printf("%d",a-b);
    }
    else if(s=='*')
    {
        printf("%d",a*b);
    }
    else if(s=='/')
    {
        printf("%d",a/b);
    }
    return 0;
}