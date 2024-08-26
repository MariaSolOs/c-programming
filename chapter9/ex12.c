#include <stdio.h>

double inner_product(double a[], double b[], int n) {
    double prod = 0;

    for (int i = 0; i < n; i++) {
        prod += a[i] * b[i];
    }

    return prod;
}

int main(void) {
    printf("Inner product: %.2f",
           inner_product((double[]){1, 2, 3}, (double[]){4, 5, 6}, 3));

    return 0;
}
