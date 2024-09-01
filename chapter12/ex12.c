#include <stdio.h>

void find_two_largest(const int a[], int n, int *largest, int *second_largest) {
    if (n == 0) {
        return;
    }

    *largest = *second_largest = *a;
    for (const int *p = a + 1; p < a + n; p++) {
        if (*largest < *p) {
            *second_largest = *largest;
            *largest = *p;
        } else if (*second_largest < *p) {
            *second_largest = *p;
        }
    }
}

int main(void) {
    int largest, second_largest;
    find_two_largest((int[]){-1, 2, 9, 3, 7}, 5, &largest, &second_largest);
    printf("Largest: %d\tSecond largest: %d", largest, second_largest);

    return 0;
}
