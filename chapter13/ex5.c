#include <ctype.h>
#include <stdio.h>

void capitalize(char *s) {
    for (; *s; s++) {
        if (isalpha(*s)) {
            *s = toupper(*s);
        }
    }
}

int main(void) {
    char s[] = "Today is Sept. 1st!";
    capitalize(s);
    puts(s);

    return 0;
}
