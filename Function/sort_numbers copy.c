#include <stdio.h>

void sort_array(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[3], original[3];

    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
        original[i] = arr[i];
    }

    sort_array(arr, 3);

    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("%d\n", original[i]);
    }

    return 0;
}
