#include<stdio.h>
int main()
{
    int A, B, found = 0;
    scanf("%d %d", &A, &B);
    for(int i = A; i <= B; i++)
    {
        int lucky = 1;
        int temp = i;
        while(temp > 0)
        {
            int rem = temp % 10;
            temp = temp / 10;
            if(rem != 4 && rem != 7)
            {
                lucky = 0;
                break;
            }
        }
        if(lucky)
        {
            printf("%d ", i);
            found = 1;
        }
    }
    if(found == 0) 
    printf("-1");
    return 0;
}
