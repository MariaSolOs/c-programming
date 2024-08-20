#include <stdio.h>

int gcd(int m, int n) {
    while (n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }

    return m;
}

int main(void) {
    int num, denom;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    int divisor = gcd(num, denom);

    printf("In lowest terms: %d/%d", num / divisor, denom / divisor);

    return 0;
}
