#include <stdio.h>

int main(void) {
    int hour, minutes;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minutes);

    _Bool is_am = hour <= 12;
    printf("Equivalent 12-hour time: %d:%.2d %s",
           is_am        ? hour
           : hour == 24 ? 12
                        : hour - 12,
           minutes, is_am ? "AM" : "PM");
    return 0;
}
