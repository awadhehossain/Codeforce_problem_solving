#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    int rev[N];

    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++) 
    {
        rev[i] = arr[N - 1 - i];
    }

    for (int i = 0; i < N; i++)
     {
        if (arr[i] != rev[i]) 
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}
