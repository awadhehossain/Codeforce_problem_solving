#include<stdio.h>
int main()
{
    char s;
    int n;
    scanf("%c",&s);
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=arr[i];j++)
        {
            printf("%c",s);
        }
        printf("\n");
    }

    return 0;
}