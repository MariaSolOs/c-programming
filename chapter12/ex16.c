#include <stdio.h>

int *find_largest(int a[], int n) {
    int *largest = a;
    for (int *p = a + 1; p < a + n; p++) {
        if (*p > *largest) {
            largest = p;
        }
    }
    return largest;
}

int main(void) {
    int temperatures[7][24] = {
        {15, 15, 14, 14, 13, 13, 13, 14, 15, 16, 17, 18,
         19, 21, 23, 24, 25, 24, 22, 20, 18, 17, 16, 15},
        {16, 16, 15, 15, 14, 14, 14, 15, 16, 17, 18, 19,
         20, 22, 24, 25, 26, 25, 23, 21, 19, 18, 17, 16},
        {17, 17, 16, 16, 15, 15, 15, 16, 17, 18, 19, 20,
         21, 23, 25, 26, 27, 26, 24, 22, 20, 19, 18, 17},
        {18, 18, 17, 17, 16, 16, 16, 17, 18, 19, 20, 21,
         22, 24, 26, 27, 28, 27, 25, 23, 21, 20, 19, 18},
        {19, 19, 18, 18, 17, 17, 17, 18, 19, 20, 21, 22,
         23, 25, 27, 28, 29, 28, 26, 24, 22, 21, 20, 19},
        {20, 20, 19, 19, 18, 18, 18, 19, 20, 21, 22, 23,
         24, 26, 28, 29, 30, 29, 27, 25, 23, 22, 21, 20},
        {21, 21, 20, 20, 19, 19, 19, 20, 21, 22, 23, 24,
         25, 27, 29, 30, 32, 30, 28, 26, 24, 23, 22, 21}
    };

    int largest = temperatures[0][0];
    int day_largest = largest;
    for (int(*day)[24] = &temperatures[0]; day < &temperatures[0] + 7; day++) {
        day_largest = *find_largest(*day, 24);
        if (day_largest > largest) {
            largest = day_largest;
        }
    }

    printf("Largest day: %d", day_largest);

    return 0;
}
