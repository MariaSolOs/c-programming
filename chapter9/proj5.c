#include <stdio.h>

void create_magic_square(int n, int magic_square[n][n]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            magic_square[i][j] = 0;
        }
    }

    i = 0, j = n / 2;
    int prev_i, prev_j;
    magic_square[i][j] = 1;
    for (int num = 2; num <= (n * n); num++) {
        prev_i = i, prev_j = j;
        i = (i == 0) ? n - 1 : i - 1;
        j = (j == n - 1) ? 0 : j + 1;

        if (magic_square[i][j] != 0) {
            i = (prev_i == n - 1) ? 0 : prev_i + 1;
            j = prev_j;
        }

        magic_square[i][j] = num;
    }
}

void print_magic_square(int n, int magic_square[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d", magic_square[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    int n;
    scanf("%d", &n);

    int magic_square[n][n];

    create_magic_square(n, magic_square);
    print_magic_square(n, magic_square);

    return 0;
}
