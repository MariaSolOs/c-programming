#include <stdio.h>
#define N 10

int *split(int *low, int *high) {
    int part_element = *low;

    while (1) {
        while (low < high && part_element <= *high) {
            high--;
        }
        if (low >= high) {
            break;
        }
        *low++ = *high;

        while (low < high && *low <= part_element) {
            low++;
        }
        if (low >= high) {
            break;
        }
        *high-- = *low;
    }

    *high = part_element;
    return high;
}

void quicksort(int *low, int *high) {
    if (low >= high) {
        return;
    }

    int *middle = split(low, high);
    quicksort(low, middle - 1);
    quicksort(middle + 1, high);
}

int main(void) {
    int a[N];

    printf("Enter %d numbers to be sorted: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    quicksort(&a[0], &a[N - 1]);

    printf("In sorted order: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
