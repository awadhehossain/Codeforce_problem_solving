#include<stdio.h>
int main()
{
    int n;
    int w,h;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&w,&h);
        if(w==h)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }

    return 0;
}