#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int fib1=0;
    long long int fib2=1;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            printf("%lld ",fib1);
        } 
        else if(i==2)
        {
            printf("%lld ",fib2);
        }
        else
        {
            long long int next_fib=fib1+fib2;
            printf("%lld ",next_fib);
            fib1=fib2;
            fib2=next_fib;
        }
    }
}