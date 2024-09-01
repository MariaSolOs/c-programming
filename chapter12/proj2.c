#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define LENGTH 100

int main(void) {
    printf("Enter a message: ");
    char c;
    char message[LENGTH] = {0};
    char *p = &message[0];
    while ((c = getchar()) != '\n' && p < &message[LENGTH]) {
        if (!isalpha(c)) {
            continue;
        }
        *p++ = tolower(c);
    }

    bool is_palindrome = true;
    p--;
    char *q = &message[0];
    while (q < p) {
        if (*q++ != *p--) {
            is_palindrome = false;
            break;
        }
    }

    if (is_palindrome) {
        printf("Palindrome");
    } else {
        printf("Not a palindrome");
    }

    return 0;
}
