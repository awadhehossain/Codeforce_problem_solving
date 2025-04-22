#include<stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld",(a%10)+(b%10));
    return 0;
}