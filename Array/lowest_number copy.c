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
    int lowest=arr[1];
    int d=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<lowest)
        {
            lowest=arr[i];
            d=i+1;
        }
    }
    printf("%d %d",lowest,d);
    return 0;
}