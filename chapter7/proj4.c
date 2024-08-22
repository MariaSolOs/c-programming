#include <stdio.h>

int main(void) {
    printf("Enter phone number: ");

    char c;
    while ((c = getchar()) != '\n') {
        switch (c) {
            case 'A':
            case 'B':
            case 'C':
                printf("2");
                break;
            case 'D':
            case 'E':
            case 'F':
                printf("3");
                break;
            case 'G':
            case 'H':
            case 'I':
                printf("4");
                break;
            case 'J':
            case 'K':
            case 'L':
                printf("5");
                break;
            case 'M':
            case 'N':
            case 'O':
                printf("6");
                break;
            case 'P':
            case 'R':
            case 'S':
                printf("7");
                break;
            case 'T':
            case 'U':
            case 'V':
                printf("8");
                break;
            case 'W':
            case 'X':
            case 'Y':
                printf("9");
                break;
            default:
                printf("%c", c);
        }
    }

    return 0;
}
