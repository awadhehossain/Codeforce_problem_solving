#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int year=n/365;
    printf("%d years\n",year);
    n=n%365;
    int month=n/30;
    printf("%d months\n",month);
    n=n%30;
    printf("%d days",n);
    return 0;


}
    
