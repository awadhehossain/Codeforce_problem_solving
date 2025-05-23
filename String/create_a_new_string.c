#include <stdio.h>
#include <string.h>

int main() {
    char a[1001];
    char b[1001];

    scanf("%s", a);
    scanf("%s", b);

    printf("%d %d\n", (int)strlen(a), (int)strlen(b));
    printf("%s %s\n", a, b);

    return 0;
}
