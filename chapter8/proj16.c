#include <ctype.h>
#include <stdio.h>

#define N 26

int main(void) {
    printf("Enter first word: ");
    int count[N] = {0};
    char c;
    while (!isspace(c = getchar())) {
        if (isalpha(c)) {
            count[toupper(c) - 'A']++;
        }
    }

    printf("Enter second word: ");
    while (!isspace(c = getchar())) {
        if (isalpha(c)) {
            if (count[toupper(c) - 'A']) {
                count[toupper(c) - 'A']--;
            } else {
                break;
            }
        }
    }

    printf("The words are ");
    for (int i = 0; i < N; i++) {
        if (count[i]) {
            printf("not ");
            break;
        }
    }
    printf("anagrams.");

    return 0;
}
