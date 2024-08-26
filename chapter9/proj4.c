#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define N 26

void read_word(int counts[N]) {
    char c;
    while (!isspace(c = getchar())) {
        if (isalpha(c)) {
            counts[toupper(c) - 'A']++;
        }
    }
}

bool equal_array(int counts1[N], int counts2[N]) {
    for (int i = 0; i < N; i++) {
        if (counts1[i] != counts2[i]) {
            return false;
        }
    }
    return true;
}

int main(void) {
    printf("Enter first word: ");
    int counts1[N] = {0};
    read_word(counts1);

    printf("Enter second word: ");
    int counts2[N] = {0};
    read_word(counts2);

    printf("The words are ");
    if (!equal_array(counts1, counts2)) {
        printf("not ");
    }
    printf("anagrams.");

    return 0;
}
