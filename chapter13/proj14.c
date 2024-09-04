#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define WORD_LEN 20
#define COUNT_LEN 26

bool are_anagrams(const char *word1, const char *word2) {
    int count[COUNT_LEN] = {0};

    for (; *word1; word1++) {
        if (isalpha(*word1)) {
            count[toupper(*word1) - 'A']++;
        }
    }

    for (; *word2; word2++) {
        if (isalpha(*word2)) {
            if (count[toupper(*word2) - 'A']) {
                count[toupper(*word2) - 'A']--;
            } else {
                return false;
            }
        }
    }

    for (int i = 0; i < COUNT_LEN; i++) {
        if (count[i]) {
            return false;
        }
    }

    return true;
}

int main(void) {
    char word1[WORD_LEN + 1], word2[WORD_LEN + 1];

    printf("Enter first word: ");
    scanf("%s", word1);
    printf("Enter second word: ");
    scanf("%s", word2);

    printf("The words are ");
    if (!are_anagrams(word1, word2)) {
        printf("not ");
    }
    printf("anagrams.");

    return 0;
}
