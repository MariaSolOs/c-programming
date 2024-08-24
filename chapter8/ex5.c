#include <stdio.h>

#define N 40

int main(void) {
    int fib_numbers[N] = {0, 1};

    for (int i = 2; i < N; i++) {
        fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", fib_numbers[i]);
    }

    return 0;
}
