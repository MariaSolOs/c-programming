#include <ctype.h>
#include <stdio.h>

int main(void) {
    printf("Enter a first and last name: ");

    // Scan the initial.
    char c, initial;
    scanf(" %c", &initial);

    // Skip the rest of the name.
    while ((c = getchar()) != ' ') {}

    // Print the last name.
    scanf(" %c", &c);
    printf("%c", c);
    do {
        c = getchar();
        if (!isspace(c)) {
            printf("%c", c);
        }
    } while (c != '\n');

    // Print the initial.
    printf(", %c.", initial);

    return 0;
}
