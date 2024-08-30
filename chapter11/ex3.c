#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum) {
    *sum = 0;
    for (int i = 0; i < n; i++) {
        *sum += a[i];
    }
    *avg = *sum / n;
}

int main(void) {
    double avg, sum;
    avg_sum((double[]){1.0, 2.3, 3.4, 5.6}, 4, &avg, &sum);
    printf("Average: %.2f\tSum: %.2f", avg, sum);

    return 0;
}
