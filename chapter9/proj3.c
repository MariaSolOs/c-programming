#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void generate_random_walk(char walk[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            walk[i][j] = '.';
        }
    }

    int i = 0, j = 0;
    char c = 'A';
    walk[i][j] = c++;

    srand(time(NULL));

    int up, down, left, right;
    while (c <= 'Z') {
        up = down = left = right = 0;

        if (i > 0 && walk[i - 1][j] == '.') {
            up = 1;
        }
        if (i < N - 1 && walk[i + 1][j] == '.') {
            down = 1;
        }
        if (j > 0 && walk[i][j - 1] == '.') {
            left = 1;
        }
        if (j < N - 1 && walk[i][j + 1] == '.') {
            right = 1;
        }

        if ((up + down + left + right) == 0) {
            break;
        }

        switch (rand() % 4) {
            case 0:
                if (up) {
                    walk[--i][j] = c++;
                    break;
                }
            case 1:
                if (down) {
                    walk[++i][j] = c++;
                    break;
                }
            case 2:
                if (left) {
                    walk[i][--j] = c++;
                    break;
                }
            case 3:
                if (right) {
                    walk[i][++j] = c++;
                    break;
                }
        }
    }
}

void print_array(char walk[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    char walk[N][N];

    generate_random_walk(walk);
    print_array(walk);

    return 0;
}
