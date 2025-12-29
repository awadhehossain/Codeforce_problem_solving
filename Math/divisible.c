#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    if(n%x==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}