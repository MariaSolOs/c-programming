#include <stdio.h>

#define N 100

int main(void) {
    printf("Enter a sentence: ");

    char sentence[N];
    int i = 0;
    char c, end;
    while (1) {
        c = getchar();
        if (c == '.' || c == '?' || c == '!') {
            end = c;
            break;
        }
        sentence[i++] = c;
    }

    printf("Reversal of sentence:");

    int j = i--;
    int start = j;
    while (i >= 0) {
        printf(" ");
        while (j >= 0 && sentence[j] != ' ') {
            j--;
        }
        start = j++ - 1;
        for (; j <= i; j++) {
            printf("%c", sentence[j]);
        }
        i = j = start;
    }
    printf("%c", end);

    return 0;
}
