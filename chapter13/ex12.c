#include <string.h>

void get_extension(const char *file_name, char *extension) {
    while (*file_name && *file_name++ != '.');
    strcpy(extension, *file_name ? file_name : "");
}
