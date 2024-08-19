#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    int largest = n1, smallest = n1;
    if (n1 < n2) {
        largest = n2;
    } else {
        smallest = n2;
    }

    if (n3 > largest) {
        largest = n3;
    } else if (n3 < smallest) {
        smallest = n3;
    }

    if (n4 > largest) {
        largest = n4;
    } else if (n4 < smallest) {
        smallest = n4;
    }

    printf("Largest: %d\nSmallest: %d", largest, smallest);

    return 0;
}
