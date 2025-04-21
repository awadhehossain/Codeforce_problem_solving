#include<stdio.h>

int main() {
    int x, p;
    float original_price;

    scanf("%d %d", &x, &p);
    original_price = p / (1 - (x / 100.0));
    printf("%.2f", original_price);

    return 0;
}
