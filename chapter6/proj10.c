#include <stdio.h>

int main(void) {
    int m, m0 = 12, d, d0 = 31, y, y0 = 99;

    while (1) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &m, &d, &y);

        if (m == 0 && d == 0 && y == 0) {
            break;
        }

        if (y < y0 || (y == y0 && (m < m0 || (m == m0 && d < d0)))) {
            m0 = m, d0 = d, y0 = y;
        }
    }

    printf("%d/%d/%.2d is the earliest date", m0, d0, y0);

    return 0;
}
