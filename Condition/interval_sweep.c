#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if((a == b || a==b+1 || b==a+1) && (a+b > 0))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}