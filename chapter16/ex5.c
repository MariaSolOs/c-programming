#include <stdio.h>

struct date {
    int month, day, year;
};

int day_of_year(struct date d) {
    const int days_in_months[] = {31, 28, 31, 30, 31, 30,
                                  31, 31, 30, 31, 30, 31};

    int days = d.day;

    for (int i = 0; i < d.month; i++) {
        days += days_in_months[i];
    }

    // Take into account leap years.
    if (d.month >= 2 &&
        ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0))) {
        days++;
    }

    return days;
}

int compare_dates(struct date d1, struct date d2) {
    if (d1.year < d2.year) {
        return -1;
    }
    if (d2.year < d1.year) {
        return 1;
    }

    int diff = day_of_year(d1) - day_of_year(d2);
    if (diff < 0) {
        return -1;
    }
    if (diff > 0) {
        return 1;
    }

    return 0;
}
