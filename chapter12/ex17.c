#include <stdio.h>
#define LEN 3

int sum_two_dimensional_array(const int a[][LEN], int n) {
    int sum = 0;

    for (const int *p = &a[0][0]; p <= &a[n - 1][LEN - 1]; p++) {
        sum += *p;
    }

    return sum;
}

int main(void) {
    int a[][LEN] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    printf("Sum: %d", sum_two_dimensional_array(a, 2));
    return 0;
}
