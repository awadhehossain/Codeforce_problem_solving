#include<stdio.h>
void Print(int n)
{   

    if(n==0)
    {
        return;
    }
    Print(n-1);
    printf("%d\n",n);
   
}

int main()
{
    int n;
    scanf("%d",&n);
    Print(n);
    return 0;
}  