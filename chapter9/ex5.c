#include <stdio.h>

int num_digits(int n) {
    int digits;
    for (digits = 0; n > 0; n /= 10, digits++) {}
    return digits;
}

int main(void) {
    printf("Digits in 123: %d\n", num_digits(123));
    printf("Digits in 0: %d\n", num_digits(0));

    return 0;
}
