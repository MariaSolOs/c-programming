#include <stdio.h>

int *find_largest(int a[], int n) {
    int *largest = &a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > *largest) {
            largest = &a[i];
        }
    }
    return largest;
}

int main(void) {
    printf("Largest: %d", *find_largest((int[]){10, 2, -1, 3}, 4));

    return 0;
}
