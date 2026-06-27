#include<stdio.h>
int main() {
    int X, Y, i, sum;
    int t;
 
    scanf("%d", &t);
 
    while (t --) 
    {
        scanf("%d %d", &X, &Y);
 
        sum = 0;
 
        if (X > Y)
        {
            for (i = Y + 1; i < X; i++) 
            {
                if (i % 2 != 0) 
                {
                    sum += i;
                }
            }
        } 
        else 
        {
            for (i = X + 1; i < Y; i++) 
            {
                if (i % 2 != 0) 
                {
                    sum += i;
                }
            }
        }
 
        printf("%d\n", sum);
    }
 
    return 0;
}