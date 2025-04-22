#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    while (x != 1999) {
        printf("Wrong\n");
        scanf("%d", &x);
    }

    printf("Correct\n");

    return 0;
}
