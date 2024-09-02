#include <ctype.h>
#include <stdio.h>

int read_line_a(char str[], int n) {
    char c;
    int i = 0;

    while ((c = getchar()) != '\n') {
        if (i == 0 && isspace(c)) {
            continue;
        }
        if (i < n) {
            str[i++] = c;
        }
    }
    str[i] = '\0';

    return i;
}

int read_line_b(char str[], int n) {
    char c;
    int i = 0;

    while (!isspace(c = getchar())) {
        if (i < n) {
            str[i++] = c;
        }
    }
    str[i] = '\0';

    return i;
}

int read_line_c(char str[], int n) {
    char c;
    int i = 0;

    do {
        c = getchar();
        if (i < n) {
            str[i++] = c;
        }
    } while (c != '\n');
    str[i] = '\0';

    return i;
}

int read_line_d(char str[], int n) {
    char c;
    int i = 0;

    while ((c = getchar()) != '\n' && i < n) {
        str[i++] = c;
    }
    str[i] = '\0';

    return i;
}
