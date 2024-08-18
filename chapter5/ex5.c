#include <stdio.h>

int main(void) {
    float income;

    printf("Enter amount of taxable income: ");
    scanf("%f", &income);

    float tax;
    if (income < 750.0f) {
        tax = 0.01f * income;
    } else if (income <= 2250.0f) {
        tax = 7.5f + (income - 750.0f) * 0.02f;
    } else if (income <= 3750.0f) {
        tax = 37.5f + (income - 2250.0f) * 0.03f;
    } else if (income <= 5250.0f) {
        tax = 82.5f + (income - 3750.0f) * 0.04f;
    } else if (income <= 7000.0f) {
        tax = 142.5f + (income - 5250.0f) * 0.05f;
    } else {
        tax = 230.0f + (income - 7000.0f) * 0.06f;
    }

    printf("Tax due: $%.2f", tax);

    return 0;
}
