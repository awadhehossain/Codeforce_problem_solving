#include <stdio.h>
#include <limits.h>
//For INT_MIN INT MAX that is intiger limit 

int main() {
    long long n, k, a;
    scanf("%lld %lld %lld", &n, &k, &a);

    long long result = n * k;

    if (result % a != 0) {
        printf("double\n");
    } else {
        result = result / a;
        if (result >= INT_MIN && result <= INT_MAX) {
            printf("int\n");
        } else {
            printf("long long\n");
        }
    }

    return 0;
}
