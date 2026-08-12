#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=0;
    for(int i=a;i<=b;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}