#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest) {
    if (n == 0) {
        return;
    }

    *largest = *second_largest = a[0];
    for (int i = 1; i < n; i++) {
        if (*largest < a[i]) {
            *second_largest = *largest;
            *largest = a[i];
        } else if (*second_largest < a[i]) {
            *second_largest = a[i];
        }
    }
}

int main(void) {
    int largest, second_largest;
    find_two_largest((int[]){-1, 2, 9, 3, 7}, 5, &largest, &second_largest);
    printf("Largest: %d\tSecond largest: %d", largest, second_largest);

    return 0;
}
