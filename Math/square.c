#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a==b && b==c && c==d)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        t--;
    }
    return 0;


}