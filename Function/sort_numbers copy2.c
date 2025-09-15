#include<stdio.h>
void sort_array(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }


}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int orginal_arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        orginal_arr[i]=arr[i];
    }

    sort_array(arr,n);

    for (int i = 0; i < n; i++) 
    {
        printf("%d\n", arr[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++) 
    {
        printf("%d\n", orginal_arr[i]);
    }

    return 0;

}