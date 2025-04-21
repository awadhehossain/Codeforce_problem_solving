#include <stdio.h>

int main()
{
    int a, b, c;
    long long int d;
    scanf("%d %d %d %lld", &a, &b, &c, &d);
    
    if (
        ((a + b) * c == d) ||
        ((a * b) + c == d) ||
        ((a - b) * c == d) ||
        ((a * b) - c == d) ||
        ((a + c) * b == d) ||
        ((a * c) + b == d) ||
        ((a - c) * b == d) ||
        ((a * c) - b == d) ||
        ((b + c) * a == d) ||
        ((b * c) + a == d) ||
        ((b - c) * a == d) ||
        ((b * c) - a == d)
    )
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    problem;

    return 0;
}
