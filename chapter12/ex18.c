#include <ctype.h>
#define SIZE 8

int evaluate_position(char board[SIZE][SIZE]) {
    int white = 0, black = 0;
    int value;

    for (char *c = &board[0][0]; c <= &board[SIZE - 1][SIZE - 1]; c++) {
        switch (toupper(*c)) {
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

        if (isupper(*c)) {
            white += value;
        } else {
            black += value;
        }
    }

    return white - black;
}
