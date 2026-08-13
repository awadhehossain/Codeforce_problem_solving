#include <stdio.h>
#include <math.h>

int main()
{
    long long A;
    scanf("%lld", &A);

    long long x = sqrt(A);

    while (A % x != 0)
    {
        x--;
    }

    long long y = A / x;

    printf("%lld\n", 2 * (x + y));

    return 0;
}