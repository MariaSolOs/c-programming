#include <ctype.h>
#include <stdio.h>

int main(void) {
    printf("Enter a word: ");

    int value = 0;
    char c;
    while ((c = getchar()) != '\n') {
        c = toupper(c);
        switch (c) {
            case 'A':
            case 'E':
            case 'I':
            case 'L':
            case 'N':
            case 'O':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
                value += 1;
                break;
            case 'D':
            case 'G':
                value += 2;
                break;
            case 'B':
            case 'C':
            case 'M':
            case 'P':
                value += 3;
                break;
            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y':
                value += 4;
                break;
            case 'K':
                value += 5;
                break;
            case 'J':
            case 'X':
                value += 8;
                break;
            case 'Q':
            case 'Z':
                value += 10;
                break;
        }
    }

    printf("Scrabble value: %d", value);

    return 0;
}
