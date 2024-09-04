#include <stdio.h>
#include <string.h>

#define N 50

void reverse_name(char *name) {
    char *p = name;

    // Skip initial space.
    while (*p == ' ') {
        p++;
    }

    // Get the initial.
    char initial = *p++;

    // Skip the rest of the name.
    while (*p != ' ') {
        p++;
    }

    // Skip space before the last name.
    while (*p == ' ') {
        p++;
    }

    // Copy the last name to the beginning.
    while (*p && *p != ' ') {
        *name++ = *p++;
    }

    // Add the comma and the initial to the end.
    *name++ = ',';
    *name++ = ' ';
    *name++ = initial;
    *name = '\0';
}

int main(void) {
    printf("Enter a first and last name: ");
    char name[N + 1];
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    reverse_name(name);

    printf("Reversed: %s", name);

    return 0;
}
