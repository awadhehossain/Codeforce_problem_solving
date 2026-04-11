#include<stdio.h>
long long int array_sum(int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }
    
    return arr[n-1]+array_sum(arr,n-1);

}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    double result=(double)array_sum(arr,n)/n;
    printf("%.6lf",result);
    return 0;
}