#include <stdio.h>

void selection_sort(int arr[], int n) {
    if (n <= 1) {
        return;
    }

    int largest_i = 0;
    for (int i = 1; i < n; i++) {
        if (arr[largest_i] < arr[i]) {
            largest_i = i;
        }
    }

    int last = arr[n - 1];
    arr[n - 1] = arr[largest_i];
    arr[largest_i] = last;

    selection_sort(arr, n - 1);
}

int main(void) {
    int n;
    printf("Enter the length of the series: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    selection_sort(arr, n);

    printf("Sorted series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
