#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int last_digit=n%10;
    int first_digit=n/10;
    if(last_digit%first_digit==0 || first_digit%last_digit==0)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
    return 0;
}