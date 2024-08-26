#include <stdio.h>

int digit(int n, int k) {
    do {
        if (--k == 0) {
            return n % 10;
        }
    } while ((n /= 10) > 0);

    return 0;
}

int main(void) {
    for (int d = 1; d <= 4; d++) {
        printf("digit(829, %d): %d\n", d, digit(829, d));
    }

    return 0;
}
