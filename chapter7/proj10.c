#include <ctype.h>
#include <stdio.h>

int main(void) {
    printf("Enter a sentence: ");

    char c;
    int vowels = 0;
    while ((c = getchar()) != '.') {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels += 1;
        }
    }

    printf("Your sentence contains %d vowels.", vowels);

    return 0;
}
