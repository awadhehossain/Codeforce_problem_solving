#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        int a;
        int sum = 0;

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            sum += 100 / a;
        }

        if(sum <= 100)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}