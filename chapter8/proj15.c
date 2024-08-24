#include <ctype.h>
#include <stdio.h>

#define N 80

int main(void) {
    printf("Enter message to be encrypted: ");

    char message[N + 1] = {0};
    char c;
    int i = 0;
    while ((c = getchar()) != '\n') {
        message[i++] = c;
    }

    int shift;
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    printf("Encrypted message: ");
    char start;
    for (i = 0; message[i] != '\0'; i++) {
        if (isalpha(message[i])) {
            start = isupper(message[i]) ? 'A' : 'a';
            c = ((message[i] - start) + shift) % 26 + start;
        } else {
            c = message[i];
        }
        printf("%c", c);
    }

    return 0;
}
