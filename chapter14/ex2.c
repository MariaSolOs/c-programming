#include <stdio.h>
#define NELEMS(a) ((int)(sizeof(a) / sizeof(a[0])))

int main(void) {
    int arr[] = {0, 1, 2};
    printf("Size: %d", NELEMS(arr));

    return 0;
}
