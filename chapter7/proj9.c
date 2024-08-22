#include <ctype.h>
#include <stdio.h>

int main(void) {
    int hour, minutes;
    char indicator;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minutes, &indicator);

    if (toupper(indicator) == 'P') {
        if (hour != 12) {
            hour += 12;
        }
    } else if (hour == 12) {
        hour = 0;
    }

    printf("Equivalent 24-hour time: %d:%.2d", hour, minutes);

    return 0;
}
