#include<stdio.h>
int sum_digits(int n)
{
    if(n==0)
    {
        return 0;
    }
    return (n % 10) + sum_digits(n / 10);
}

int main()
{
    int n;
    scanf("%d",&n);
    int result=sum_digits(n);
    printf("%d",result);
    return 0;
}