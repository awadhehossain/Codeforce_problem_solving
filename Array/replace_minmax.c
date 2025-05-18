#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int min_index = 0;
    int max_index = 0;

    for (int i = 1; i < N; i++) 
    {
        if (arr[i] < arr[min_index]) 
        {
            min_index = i;
        }
        if (arr[i] > arr[max_index]) 
        {
            max_index = i;
        }
    }

    int temp = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = temp;

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
