#include <stdio.h>

int main() {
    int A, B, C;
    char op, eq;

    scanf("%d %c %d %c %d", &A, &op, &B, &eq, &C);

    int result;
    if (op == '+') 
    {
        result = A + B;
    } 
    else if (op == '-') 
    {
        result = A - B;
    } 
    else if (op == '*') 
    {
        result = A * B;
    }

    if (result == C)
    {
        printf("Yes\n");
    }
     else 
    {
        printf("%d\n", result);
    }

    return 0;
}
