#include <stdio.h>

int main() {
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    // Integer overfollow
    long long int mod = 100;
    long long int result = a % mod;
    result = (result * (b % mod)) % mod;
    result = (result * (c % mod)) % mod;
    result = (result * (d % mod)) % mod;

    printf("%02lld\n", result);

    return 0;
}
