#include<stdio.h>
void Print(int n)
{  
    if(n==0)
    {
        return;
    } 
    printf("%d",n);
    if(n>1)
    {
        printf(" ");
    }
    Print(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    Print(n);
    return 0;
}  