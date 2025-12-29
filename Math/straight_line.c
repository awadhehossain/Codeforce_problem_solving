#include <stdio.h>
#include <stdlib.h>

int main() {
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    scanf("%lf %lf", &x3, &y3);

    double area2 = 0.5*(x1*y2 + x2*y3 + x3*y1 - x2*y1 - x3*y2 - x1*y3);

    if (area2 == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
