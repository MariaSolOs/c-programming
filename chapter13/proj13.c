#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define N 80

void encrypt(char *message, int shift) {
    char start;
    for (; *message; message++) {
        if (isalpha(*message)) {
            start = isupper(*message) ? 'A' : 'a';
            *message = ((*message - start) + shift) % 26 + start;
        }
    }
}

int main(void) {
    printf("Enter message to be encrypted: ");

    char message[N + 1] = {0};
    fgets(message, sizeof(message), stdin);
    message[strlen(message) - 1] = '\0';

    int shift;
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    encrypt(message, shift);
    printf("Encrypted message: %s", message);

    return 0;
}
