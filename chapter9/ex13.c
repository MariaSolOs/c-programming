#include <ctype.h>
#define BOARD_SIZE 8

int evaluate_position(char board[BOARD_SIZE][BOARD_SIZE]) {
    int white = 0, black = 0;

    int value;
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            switch (toupper(board[i][j])) {
                case 'Q':
                    value = 9;
                    break;
                case 'R':
                    value = 5;
                    break;
                case 'B':
                case 'N':
                    value = 3;
                    break;
                case 'P':
                    value = 1;
                    break;
            }

            if (isupper(board[i][j])) {
                white += value;
            } else {
                black += value;
            }
        }
    }

    return white - black;
}
