#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

bool test_extension(const char *file_name, const char *extension) {
    while (*file_name && *file_name++ != '.');

    for (; *file_name && *extension; file_name++, extension++) {
        if (toupper(*file_name) != toupper(*extension)) {
            return false;
        }
    }

    return !*file_name && !*extension;
}

int main(void) {
    printf("%d", test_extension("memo.txt", "TXT"));

    return 0;
}
