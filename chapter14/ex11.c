#include <stdio.h>

#define ERROR(fmt, ...) fprintf(stderr, (fmt), __VA_ARGS__)

int main(void) {
    int index = 1;
    ERROR("Range error: index = %d\n", index);

    return 0;
}
