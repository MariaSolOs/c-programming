#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
    *twenties = *tens = *fives = *ones = 0;
    while (dollars) {
        if (dollars >= 20) {
            *twenties = dollars / 20;
            dollars %= 20;
        }
        if (dollars >= 10) {
            *tens = dollars / 10;
            dollars %= 10;
        }
        if (dollars >= 5) {
            *fives = dollars / 5;
            dollars %= 5;
        }
        if (dollars >= 1) {
            *ones = dollars;
            dollars = 0;
        }
    }
}

int main(void) {
    int twenties, tens, fives, ones;
    pay_amount(34, &twenties, &tens, &fives, &ones);
    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);

    return 0;
}
