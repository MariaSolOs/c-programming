#include <stdio.h>
#define N 10

void max_min(int a[], int n, int *max, int *min) {
    *max = *min = a[0];

    for (int *p = &a[1]; p < &a[n - 1]; p++) {
        if (*p > *max) {
            *max = *p;
        } else if (*p < *min) {
            *min = *p;
        }
    }
}

int main(void) {
    int a[N];
    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    int max, min;
    max_min(a, N, &max, &min);

    printf("Largest: %d\tSmallest: %d", max, min);

    return 0;
}
