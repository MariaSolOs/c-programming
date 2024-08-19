#include <stdio.h>

int main(void) {
    int digs1, digs2, digs3;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &digs1, &digs2, &digs3);
    printf("You entered %d.%d.%d", digs1, digs2, digs3);

    return 0;
}
