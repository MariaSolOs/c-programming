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
    printf("Largest: %d", *find_largest((int[]){10, 2, -1, 3}, 4));

    return 0;
}
