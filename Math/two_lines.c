#include<stdio.h>
int main()
{
    long long X1,Y1,X2,Y2,X3,Y3,X4,Y4;
    scanf("%lld %lld %lld %lld",&X1,&Y1,&X2,&Y2);
    scanf("%lld %lld %lld %lld",&X3,&Y3,&X4,&Y4);
    long long A1=(X2-X1);
    long long A3=(Y2-Y1);
    long long A2=(X4-X3);
    long long A4=(Y4-Y3);
    if(A2 * A3 == A1 * A4)
    {
        printf("YES");
    }
    
    else
    {
        printf("NO");
    }

    return 0;
}