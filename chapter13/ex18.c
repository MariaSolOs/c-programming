#include <stdio.h>

void remove_filename(char *url) {
    while (*url++);
    while (*--url != '/');
    *url = '\0';
}

int main(void) {
    char url[] = "http://www.knking.com/index.html";
    remove_filename(url);
    puts(url);

    return 0;
}
