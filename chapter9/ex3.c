#include <stdio.h>

int gcd(int m, int n) {
    if (n == 0) {
        return m;
    }
    return gcd(n, m % n);
}

int main(void) {
    printf("GCD of 6 and 2: %d\n", gcd(6, 2));
    printf("GCD of 3 and 4: %d\n", gcd(3, 4));

    return 0;
}
