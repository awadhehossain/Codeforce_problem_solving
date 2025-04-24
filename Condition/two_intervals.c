#include<stdio.h>
int main()
{
    long long int l1,l2,r1,r2;
    long long int left,right;
    scanf("%lld %lld %lld %lld",&l1,&r1,&l2,&r2);
    if(l2>l1)
    {
        left=l2; 
    }
    else
    {
        left=l1;
    }
    if(r1<r2)
    {
        right=r1;
    }
    else
    {
        right=r2;
    }
    if(left<=right)
    {
        printf("%lld %lld",left,right);
    }
    else
    {
        printf("-1");
    }
    return 0;

}