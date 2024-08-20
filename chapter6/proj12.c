#include <stdio.h>

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main(void) {
    float epsilon;

    printf("Enter epsilon: ");
    scanf("%f", &epsilon);

    float e = 0.0f;
    float term = 1.0f;
    int i = 1;
    while (term >= epsilon) {
        e += term;
        term = 1.0f / factorial(i++);
    }

    printf("Approximation of e: %.4f", e);

    return 0;
}
