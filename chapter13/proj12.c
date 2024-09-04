#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define NUM_WORDS 30
#define WORD_LEN 20

bool is_terminating(char c) {
    return c == '.' || c == '?' || c == '!';
}

int main(void) {
    printf("Enter a sentence: ");

    char sentence[NUM_WORDS][WORD_LEN + 1];
    char word[WORD_LEN + 1];
    char end;
    int i;
    for (i = 0; i < NUM_WORDS && !is_terminating(end); i++) {
        scanf("%20s", word);
        end = word[strlen(word) - 1];

        if (is_terminating(end)) {
            word[strlen(word) - 1] = '\0';
        } else {
            word[strlen(word)] = '\0';
        }

        strcpy(sentence[i], word);
    }

    printf("Reversal of sentence: ");
    for (i--; i > 0; i--) {
        printf("%s ", sentence[i]);
    }
    printf("%s%c", sentence[i], end);

    return 0;
}
