
#include <stdio.h>
 
int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
 
    long long result;
    int found = 0;
 
 
    result = a + b - c; 
    if (result == d) found = 1;
    
    result = a + b * c; 
    if (result == d) found = 1;
 
    result = a - b + c; 
    if (result == d) found = 1;
    
    result = a - b * c; 
    if (result == d) found = 1;
 
    result = a * b + c; 
    if (result == d) found = 1;
    result = a * b - c; 
    if (result == d) found = 1;
 
    if (found)
        printf("YES\n");
    else
        printf("NO\n");
 
    return 0;
}