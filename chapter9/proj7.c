#include <stdio.h>

int power(int x, int n) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 0) {
        return power(x * x, n / 2);
    } else {
        return x * power(x, n - 1);
    }
}

int main(void) {
    int x, n;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter n: ");
    scanf("%d", &n);

    printf("x to the power of n equals %d: ", power(x, n));

    return 0;
}
