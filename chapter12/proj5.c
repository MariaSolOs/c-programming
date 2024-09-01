#include <stdio.h>

#define N 100

int main(void) {
    printf("Enter a sentence: ");

    char sentence[N];
    char *p = &sentence[0];
    char c, end;
    while (1) {
        c = getchar();
        if (c == '.' || c == '?' || c == '!') {
            end = c;
            break;
        }
        *p++ = c;
    }

    printf("Reversal of sentence:");

    char *q = p--;
    char *start = q;
    while (p >= &sentence[0]) {
        printf(" ");
        while (q >= &sentence[0] && *q != ' ') {
            q--;
        }
        start = q++ - 1;
        for (; q <= p; q++) {
            putchar(*q);
        }
        p = q = start;
    }

    printf("%c", end);

    return 0;
}
