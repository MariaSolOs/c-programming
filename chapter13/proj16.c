#include <stdio.h>
#include <string.h>

#define MSG_LEN 100

void reverse(char *message) {
    char *l = &message[0];
    char *r = &message[strlen(message) - 1];
    char temp;

    while (l < r) {
        temp = *r;
        *r-- = *l;
        *l++ = temp;
    }
}

int main(void) {
    printf("Enter a message: ");

    char message[MSG_LEN];
    fgets(message, sizeof(message), stdin);
    message[strlen(message) - 1] = '\0';

    reverse(message);
    printf("Reversed message: %s", message);

    return 0;
}
