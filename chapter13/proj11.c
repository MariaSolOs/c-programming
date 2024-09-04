#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define N 100

double compute_average_word_length(const char *sentence) {
    int num_words = 0, len_sum = 0;

    for (; *sentence; sentence++) {
        if (isspace(*sentence)) {
            num_words++;
        } else {
            len_sum++;
        }
    }

    return (double)len_sum / num_words;
}

int main(void) {
    printf("Enter a sentence: ");

    char sentence[N + 1];
    fgets(sentence, sizeof(sentence) - 1, stdin);
    sentence[strlen(sentence)] = '\0';

    printf("Average word length: %.1f", compute_average_word_length(sentence));

    return 0;
}
