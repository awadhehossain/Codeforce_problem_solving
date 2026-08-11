#include <stdio.h>
 
int main() {
    unsigned int A, B;
    scanf("%u %u", &A, &B);
    printf("%u\n", A ^ B);
    return 0;
}