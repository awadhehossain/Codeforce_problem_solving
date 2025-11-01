#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    char S[100005];
    int results[100];

    for (int i = 0; i < T; i++) {
        scanf("%s", S);
        int len = strlen(S);
        results[i] = 0;
        for (int j = 0; j < len - 2; j++) {
            if ((S[j] == '0' && S[j+1] == '1' && S[j+2] == '0') ||
                (S[j] == '1' && S[j+1] == '0' && S[j+2] == '1')) {
                results[i] = 1;
                break;
            }
        }
    }

    for (int i = 0; i < T; i++) {
        if (results[i]==1)
            printf("Good\n");
        else
            printf("Bad\n");
    }

    return 0;
}
