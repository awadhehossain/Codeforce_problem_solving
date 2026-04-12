#include<stdio.h>
int main()
{
    long long int n,m,k;
    scanf("%lld %lld %lld",&n,&m,&k);
    long long count =0;
    while(n>=1 && m>=1 && k>=1)
    {
        n--;
        m--;
        k--;
        count++;
    }

    while(n>=2 && k>=1)
    {
        n-=2;
        k--;
        count++;
    }

    printf("%lld\n",count);
    return 0;

}