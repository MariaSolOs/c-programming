#include <stdio.h>

int main(void) {
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    int twenties = 0, tens = 0, fives = 0, ones = 0;
    while (amount) {
        if (amount >= 20) {
            twenties += 1;
            amount -= 20;
        } else if (amount >= 10) {
            tens += 1;
            amount -= 10;
        } else if (amount >= 5) {
            fives += 1;
            amount -= 5;
        } else {
            ones += amount;
            amount = 0;
        }
    }

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);

    return 0;
}
