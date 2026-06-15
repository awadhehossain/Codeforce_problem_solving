#include<stdio.h>
int main()
{
    int x;
    int prime=1;
    scanf("%d",&x);
    for(int i=2;i<x;i++)
    {
       if(x%i==0)
       {
        prime=0;
        break;
       }
    }
     if(prime==1)
       {
        printf("YES\n");
       }
       else
       {
        printf("NO\n");
       }
 
    return 0;
}