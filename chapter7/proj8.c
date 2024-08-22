#include <ctype.h>
#include <stdio.h>

int minutes_since_midnight(int hour, int minutes) {
    return (60 * hour) + minutes;
}

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

    int since_midnight = minutes_since_midnight(hour, minutes);

    printf("Closest departure time is ");
    if (since_midnight < minutes_since_midnight(8, 0)) {
        printf("8:00 a.m., arriving at 10:16 a.m.");
    } else if (since_midnight < minutes_since_midnight(9, 43)) {
        printf("9:43 a.m., arriving at 11:52 a.m.");
    } else if (since_midnight < minutes_since_midnight(11, 19)) {
        printf("11:19 a.m., arriving at 1:31 p.m.");
    } else if (since_midnight < minutes_since_midnight(12, 47)) {
        printf("12:47 p.m., arriving at 3:00 p.m.");
    } else if (since_midnight < minutes_since_midnight(14, 0)) {
        printf("2:00 p.m., arriving at 4:08 p.m.");
    } else if (since_midnight < minutes_since_midnight(15, 45)) {
        printf("3:45 p.m., arriving at 5:55 p.m.");
    } else if (since_midnight < minutes_since_midnight(19, 0)) {
        printf("7:00 p.m., arriving at 9:20 p.m.");
    } else if (since_midnight < minutes_since_midnight(21, 45)) {
        printf("9:45 p.m., arriving at 11:58 p.m.");
    } else {
        // Wait for the next day.
        printf("8:00 a.m., arriving at 10:16 a.m.");
    }

    return 0;
}
