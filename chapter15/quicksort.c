#include "quicksort.h"

void quicksort(int a[], int low, int high) {
    if (low >= high) {
        return;
    }

    int middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high) {
    int part_element = a[low];

    while (1) {
        while (low < high && part_element <= a[high]) {
            high--;
        }
        if (low >= high) {
            break;
        }
        a[low++] = a[high];

        while (low < high && a[low] <= part_element) {
            low++;
        }
        if (low >= high) {
            break;
        }
        a[high--] = a[low];
    }

    a[high] = part_element;
    return high;
}
