#include <stdio.h>
#define DAYS 30
#define HOURS 24

int main(void) {
    double temperature_readings[DAYS][HOURS];

    // -- snip -- (fill in temperatures)

    double temperature_sum = 0;
    for (int i = 0; i < DAYS; i++) {
        for (int j = 0; j < HOURS; j++) {
            temperature_sum += temperature_readings[i][j];
        }
    }

    printf("Average temperature: %.1f", temperature_sum / (DAYS * HOURS));

    return 0;
}
