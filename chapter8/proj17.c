#include <stdio.h>

int main(void) {
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    int size;
    scanf("%d", &size);

    int square[size][size];
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            square[i][j] = 0;
        }
    }

    i = 0, j = size / 2;
    int prev_i, prev_j;
    square[i][j] = 1;
    for (int n = 2; n <= (size * size); n++) {
        prev_i = i, prev_j = j;
        i = (i == 0) ? size - 1 : i - 1;
        j = (j == size - 1) ? 0 : j + 1;

        if (square[i][j] != 0) {
            i = (prev_i == size - 1) ? 0 : prev_i + 1;
            j = prev_j;
        }

        square[i][j] = n;
    }

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%5d", square[i][j]);
        }
        printf("\n");
    }

    return 0;
}
