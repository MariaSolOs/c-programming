#include <stdio.h>

int check(int x, int y, int n) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main(void) {
    printf("check with x=2, y=3, n=4: %d\n", check(2, 3, 4));
    printf("check with x=2, y=3, n=3: %d\n", check(2, 3, 3));

    return 0;
}
