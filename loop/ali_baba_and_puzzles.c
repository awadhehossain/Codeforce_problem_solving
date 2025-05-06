#include<stdio.h>
int main()
{
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if((a+b*c==d) || (a+b-c==d) || (a-b+c==d) || (a-b*c==0) || (a*b+c==d) || (a*b-c==d) )
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}