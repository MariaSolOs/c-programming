#include <stdio.h>

int main(void) {
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    int count[10] = {0};
    for (int digit = n % 10; n > 0; n /= 10, digit = n % 10) {
        count[digit] += 1;
    }

    printf("Repeated digit(s): ");
    for (int i = 0; i < 10; i++) {
        if (count[i] > 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
