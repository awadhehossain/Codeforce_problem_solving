#include<stdio.h>
long long int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
   
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("%lld",factorial(x));
    return 0;
}