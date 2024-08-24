#include <stdio.h>

#define N 15

int main(void) {
    char phone_number[N + 1] = {0};

    printf("Enter phone number: ");

    int i = 0;
    char c;
    while ((c = getchar()) != '\n') {
        switch (c) {
            case 'A':
            case 'B':
            case 'C':
                c = '2';
                break;
            case 'D':
            case 'E':
            case 'F':
                c = '3';
                break;
            case 'G':
            case 'H':
            case 'I':
                c = '4';
                break;
            case 'J':
            case 'K':
            case 'L':
                c = '5';
                break;
            case 'M':
            case 'N':
            case 'O':
                c = '6';
                break;
            case 'P':
            case 'R':
            case 'S':
                c = '7';
                break;
            case 'T':
            case 'U':
            case 'V':
                c = '8';
                break;
            case 'W':
            case 'X':
            case 'Y':
                c = '9';
                break;
        }
        phone_number[i++] = c;
    }

    printf("In numeric form: ");
    for (i = 0; phone_number[i] != '\0'; i++) {
        printf("%c", phone_number[i]);
    }

    return 0;
}
