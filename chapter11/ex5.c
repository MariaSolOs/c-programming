#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec) {
    *hr = total_sec / (60 * 60);
    total_sec %= 60 * 60;
    *min = total_sec / 60;
    *sec = total_sec % 60;
}

int main(void) {
    int hr, min, sec;
    split_time(75630, &hr, &min, &sec);
    printf("Hours: %d, minutes: %d, seconds: %d", hr, min, sec);

    return 0;
}
