#include <stdio.h>

#define N 5

int main(void) {
    int row_total[N] = {0};
    int col_total[N] = {0};
    int n;

    for (int i = 0; i < N; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < N; j++) {
            scanf("%d", &n);
            row_total[i] += n;
            col_total[j] += n;
        }
    }

    printf("\nRow totals: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", row_total[i]);
    }

    printf("\nColumn totals: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", col_total[i]);
    }

    return 0;
}
