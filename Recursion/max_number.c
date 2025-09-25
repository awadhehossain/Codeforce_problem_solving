 #include<stdio.h>

 int Max(int arr[], int n) 
 {
    if (n == 1)
        return arr[0];

    int maxRest = Max(arr, n - 1);
    if (arr[n - 1] > maxRest)
        return arr[n - 1];
    else
        return maxRest;
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
    printf("%d",Max(arr,n));
    return 0;
 }

