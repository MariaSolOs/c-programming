#include <stdbool.h>
#include <stdio.h>

bool search(const int a[], int n, int key) {
    for (const int *p = a; p < a + n; p++) {
        if (*p == key) {
            return true;
        }
    }

    return false;
}

int main(void) {
    int a[] = {1, 2, 3, 4};
    printf("Found 2? %s\n", search(a, 4, 2) ? "Yes" : "No");
    printf("Found 5? %s\n", search(a, 4, 5) ? "Yes" : "No");

    return 0;
}
