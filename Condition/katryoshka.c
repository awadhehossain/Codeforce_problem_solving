#include <stdio.h>
 
int main() {
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);
 
    long long limit1 = n;
    long long limit2 = k;
    long long limit3 = (n + m) / 2;
 
    long long ans = limit1;
    if (limit2 < ans) ans = limit2;
    if (limit3 < ans) ans = limit3;
 
    printf("%lld\n", ans);
    return 0;
}