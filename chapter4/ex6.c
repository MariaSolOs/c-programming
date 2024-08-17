#include <stdio.h>

int main(void) {
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6,
          &d7, &d8, &d9, &d10, &d11, &d12);

    int sum1 = d2 + d4 + d6 + d8 + d10 + d12;
    int sum2 = d1 + d3 + d5 + d7 + d9 + d11;
    int total = (sum1 * 3) + sum2;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}
