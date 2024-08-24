#include <stdio.h>

#define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.0
#define NUM_MONTHS 12

int main(void) {
    int rate, num_years;

    printf("Enter interest rate: ");
    scanf("%d", &rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");

    double value[5];
    for (int i = 0; i < NUM_RATES; i++) {
        printf("%6d%%", rate + i);
        value[i] = INITIAL_BALANCE;
    }

    printf("\n");

    for (int year = 1; year <= num_years; year++) {
        printf("%3d   ", year);
        for (int i = 0; i < NUM_RATES; i++) {
            for (int month = 0; month < NUM_MONTHS; month++) {
                value[i] +=
                    ((double)(rate + i) / NUM_MONTHS) / 100.0 * value[i];
            }
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}
