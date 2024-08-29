#include <ctype.h>
#include <stdio.h>

#define MAX_DIGITS 10

const int segments[][7] = {
    {1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1},
    {1, 0, 1, 1, 0, 1, 1},
    {1, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1}
};
char digits[4][MAX_DIGITS * 4];

void clear_digits(void) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < MAX_DIGITS * 4; j++) {
            digits[i][j] = ' ';
        }
    }
}

void process_digit(int digit, int position) {
    position *= 4;
    for (int i = 0; i < 7; i++) {
        if (segments[digit][i] == 1) {
            switch (i) {
                case 0:
                    digits[1][position + 1] = '_';
                    break;
                case 1:
                    digits[2][position + 2] = '|';
                    break;
                case 2:
                    digits[3][position + 2] = '|';
                    break;
                case 3:
                    digits[3][position + 1] = '_';
                    break;
                case 4:
                    digits[3][position] = '|';
                    break;
                case 5:
                    digits[2][position] = '|';
                    break;
                case 6:
                    digits[2][position + 1] = '_';
                    break;
            }
        }
    }
}

void print_digits(void) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < MAX_DIGITS * 4; j++) {
            printf("%c", digits[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    clear_digits();

    printf("Enter a number: ");

    char c;
    int position = 0;
    while ((c = getchar()) != '\n' && position < MAX_DIGITS) {
        if (isdigit(c)) {
            process_digit(c - '0', position++);
        }
    }

    print_digits();

    return 0;
}
