#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        long long fact=1;
        for(int j=1;j<=x;j++)
        {
            fact*=j;
        }
        printf("%lld\n",fact);

    }
    return 0;
}