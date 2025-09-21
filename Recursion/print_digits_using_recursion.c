#include<stdio.h>
void print_digit(int n)
{
   if(n==0)
   {
        return;
   } 
   print_digit(n/10);
   printf("%d ",n%10);
}

int main()
{
    int t;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<t;i++)
    {
        if(arr[i]==0)
        {
            printf("0");
        }
        else
        {
            print_digit(arr[i]);
        }
        printf("\n");
       
    }

    return 0;
}