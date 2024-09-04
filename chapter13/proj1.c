#include <stdio.h>
#include <string.h>

#define N 20

int main(void) {
    char word[N + 1], smallest[N + 1] = "", largest[N + 1] = "";

    printf("Enter word: ");
    scanf("%s", word);
    getchar();  // remove new line
    strcpy(smallest, strcpy(largest, word));

    do {
        printf("Enter word: ");
        fgets(word, sizeof(word), stdin);
        word[strlen(word) - 1] = '\0';

        if (strcmp(word, smallest) < 0) {
            strcpy(smallest, word);
        }
        if (strcmp(word, largest) > 0) {
            strcpy(largest, word);
        }
    } while (strlen(word) != 4);

    printf("\nSmallest word: %s\n", smallest);
    printf("Largest word: %s", largest);

    return 0;
}
