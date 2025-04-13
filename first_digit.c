#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int r=x/1000;
    if(r%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}