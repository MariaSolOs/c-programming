#include <stdio.h>

int main(void) {
    int i = 20;
    while (i /= 2, i >= 1) {
        printf("%d ", i++);
    }

    return 0;
}
