#include <stdio.h>

int fact(int n) {
    int f = 1;
    while (n > 1) {
        f *= n--;
    }
    return f;
}

int main(void) {
    printf("Factorial of 5: %d\n", fact(5));
    printf("Factorial of 7: %d\n", fact(7));

    return 0;
}
