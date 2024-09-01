#include <stdio.h>

double inner_product(const double *a, const double *b, int n) {
    double product = 0;

    for (const double *p = a, *q = b; p < a + n; p++, q++) {
        product += *p * *q;
    }

    return product;
}

int main(void) {
    printf("Inner product: %.2f",
           inner_product((double[]){1, 2, 3}, (double[]){4, 5, 6}, 3));

    return 0;
}
