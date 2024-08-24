#include <stdio.h>

#define N 8

int main(void) {
    char chess_board[][N] = {
        {'r', 'b', 'q', 'k', 'b', 'n', 'r', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
        {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
        {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
        {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'B', 'Q', 'K', 'B', 'N', 'R', 'R'},
    };

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", chess_board[i][j]);
        }
        printf("\n");
    }

    return 0;
}
