#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int orginal=n,reverse=0,reminder;
    while(n>0)
    {
        reminder=n%10;
        reverse=reverse*10 +reminder;
        n=n/10;
    }
    if(orginal==reverse)
    {
        printf("%d\n",reverse);
        printf("YES");
    }
    else
    {
         printf("%d\n",reverse);
        printf("NO");
    }
   
    return 0;
}