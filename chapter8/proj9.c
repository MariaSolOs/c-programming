#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(void) {
    char arr[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = '.';
        }
    }

    int i = 0, j = 0;
    char c = 'A';
    arr[i][j] = c++;

    srand(time(NULL));

    int up, down, left, right;
    while (c <= 'Z') {
        up = down = left = right = 0;

        if (i > 0 && arr[i - 1][j] == '.') {
            up = 1;
        }
        if (i < N - 1 && arr[i + 1][j] == '.') {
            down = 1;
        }
        if (j > 0 && arr[i][j - 1] == '.') {
            left = 1;
        }
        if (j < N - 1 && arr[i][j + 1] == '.') {
            right = 1;
        }

        if ((up + down + left + right) == 0) {
            break;
        }

        switch (rand() % 4) {
            case 0:
                if (up) {
                    arr[--i][j] = c++;
                    break;
                }
            case 1:
                if (down) {
                    arr[++i][j] = c++;
                    break;
                }
            case 2:
                if (left) {
                    arr[i][--j] = c++;
                    break;
                }
            case 3:
                if (right) {
                    arr[i][++j] = c++;
                    break;
                }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
