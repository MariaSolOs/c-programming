#include <stdbool.h>
#include <stdio.h>

#define N 7

int main(void) {
    bool weekend[] = {true, false, false, false, false, false, true};

    for (int i = 0; i < N; i++) {
        printf("%d ", weekend[i]);
    }

    return 0;
}
