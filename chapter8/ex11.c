#define N 8

int main(void) {
    char checker_board[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            checker_board[i][j] = (i + j) % 2 == 0 ? 'B' : 'R';
        }
    }

    return 0;
}
