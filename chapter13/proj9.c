#include <ctype.h>
#include <stdio.h>

#define N 100

int compute_vowel_count(const char *sentence) {
    int vowels = 0;

    for (; *sentence; sentence++) {
        if (*sentence == 'a' || *sentence == 'e' || *sentence == 'i' ||
            *sentence == 'o' || *sentence == 'u') {
            vowels += 1;
        }
    }

    return vowels;
}

int main(void) {
    printf("Enter a sentence: ");

    char sentence[N + 1];
    char c;
    int i = 0;
    while ((c = getchar()) != '.' && i < N) {
        sentence[i++] = tolower(c);
    }
    sentence[i] = '\0';

    printf("Your sentence contains %d vowels.", compute_vowel_count(sentence));

    return 0;
}
