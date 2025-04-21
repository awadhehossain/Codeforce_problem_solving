#include <stdio.h>
#include <math.h>

int main() 
{
    int a, c;
    long long int b, d;
    scanf("%d %lld %d %lld", &a, &b, &c, &d);

    double log1 = b * log(a);
    double log2 = d * log(c);

    if (log1 > log2)
    {
        printf("YES");
    } 
    else 
    {
        printf("NO");
    }

    return 0;
}
