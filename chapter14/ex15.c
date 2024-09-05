#include <stdio.h>

#define ENGLISH 1

int main(void) {
#if ENGLISH
    printf("Insert Disk 1\n");
#elif FRENCH
    printf("Inserez Le Disque 1\n");
#elif SPANISH
    printf("Inserte El Disco 1\n");
#endif

    return 0;
}
