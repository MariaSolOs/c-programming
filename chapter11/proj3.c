#include <stdio.h>

int gcd(int m, int n) {
    while (n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }

    return m;
}

void reduce(int numerator, int denominator, int *reduced_numerator,
            int *reduced_denominator) {
    int divisor = gcd(numerator, denominator);
    *reduced_numerator = numerator / divisor;
    *reduced_denominator = denominator / divisor;
}

int main(void) {
    int numerator, denominator, reduced_numerator, reduced_denominator;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);
    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);
    printf("In lowest terms: %d/%d", reduced_numerator, reduced_denominator);

    return 0;
}
