#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 100

int main(void) {
    char message[MAX_SIZE] = {0};

    printf("Enter message: ");

    char c;
    int i = 0;
    while (i < MAX_SIZE - 1 && (c = getchar()) != '\n') {
        message[i++] = c;
    }

    printf("In B1FF speak: ");
    for (i = 0; message[i] != '\0'; i++) {
        message[i] = toupper(message[i]);
        switch (message[i]) {
            case 'A':
                c = '4';
                break;
            case 'B':
                c = '8';
                break;
            case 'E':
                c = '3';
                break;
            case 'I':
                c = '1';
                break;
            case 'O':
                c = '0';
                break;
            case 'S':
                c = '5';
                break;
            default:
                c = message[i];
        }
        printf("%c", c);
    }

    // Generate a random number of exclamation marks (between 8 and 12).
    srand(time(NULL));
    int num_exclamations = (rand() % 5) + 8;
    for (i = 0; i < num_exclamations; i++) {
        printf("!");
    }

    return 0;
}
