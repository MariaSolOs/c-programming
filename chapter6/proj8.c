#include <stdio.h>

int main(void) {
    int days, start_day;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);

    int d = 1;
    for (int weekday = 1; d <= days; weekday++) {
        if (weekday == 8) {
            weekday = 1;
            printf("\n");
        }

        if (d == 1 && weekday < start_day) {
            printf("   ");
        } else {
            printf("%2d ", d++);
        }
    }

    return 0;
}
