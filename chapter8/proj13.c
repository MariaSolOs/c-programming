#include <ctype.h>
#include <stdio.h>

#define LAST_NAME_LEN 20

int main(void) {
    printf("Enter a first and last name: ");

    char c, initial;
    scanf(" %c", &initial);

    while ((c = getchar()) != ' ') {}

    char last_name[LAST_NAME_LEN + 1] = {0};
    int i = 0;
    scanf(" %c", &last_name[i++]);
    do {
        c = getchar();
        if (!isspace(c)) {
            last_name[i++] = c;
        }
    } while (c != '\n');

    for (i = 0; last_name[i] != '\0'; i++) {
        printf("%c", last_name[i]);
    }
    printf(", %c.", initial);

    return 0;
}
