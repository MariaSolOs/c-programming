#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define LENGTH 100

bool is_palindrome(const char *message) {
    const char *l = &message[0];
    const char *r = &message[strlen(message) - 1];

    while (l < r) {
        if (!isalpha(*l)) {
            l++;
            continue;
        }
        if (!isalpha(*r)) {
            r--;
            continue;
        }
        if (tolower(*l++) != tolower(*r--)) {
            return false;
        }
    }

    return true;
}

int main(void) {
    printf("Enter a message: ");
    char message[LENGTH] = {0};
    fgets(message, sizeof(message), stdin);
    message[strlen(message) - 1] = '\0';

    if (is_palindrome(message)) {
        printf("Palindrome");
    } else {
        printf("Not a palindrome");
    }

    return 0;
}
