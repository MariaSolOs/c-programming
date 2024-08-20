#include <stdio.h>

int main(void) {
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in the table: ");
    scanf("%d", &n);

    int odd = 3;
    for (int square = 1, i = 1; i <= n; odd += 2, i++) {
        printf("%10d%10d\n", i, square);
        square += odd;
    }

    return 0;
}
