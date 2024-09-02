#include <stdio.h>

#define LENGTH 100

int main(void) {
    printf("Enter a message: ");
    char c;
    char message[LENGTH] = {0};
    char *p = message;
    while ((c = getchar()) != '\n' && p < message + LENGTH) {
        *p++ = c;
    }

    printf("Reversal is: ");
    for (p--; p >= message; p--) {
        putchar(*p);
    }

    return 0;
}