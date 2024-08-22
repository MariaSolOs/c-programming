#include <ctype.h>
#include <stdio.h>

int main(void) {
    printf("Enter a sentence: ");

    char c;
    int len_sum = 0, num_words = 0;
    do {
        c = getchar();

        if (isspace(c)) {
            num_words += 1;
        } else if (c != '\n') {
            len_sum += 1;
        }

    } while (c != '\n');

    printf("Average word length: %.1f", (float)len_sum / num_words);

    return 0;
}
