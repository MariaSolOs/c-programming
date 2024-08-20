#include <stdio.h>

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main(void) {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    float e = 1.0f;
    for (int i = 1; i <= n; i++) {
        e += 1.0f / factorial(i);
    }

    printf("Approximation of e: %.4f", e);

    return 0;
}
