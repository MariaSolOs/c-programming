#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int temperatures[7][24] = {
        {15, 15, 14, 14, 13, 13, 13, 14, 15, 16, 17, 18,
         19, 21, 23, 24, 25, 24, 22, 20, 18, 17, 16, 15},
        {16, 16, 15, 15, 14, 14, 14, 15, 16, 17, 18, 19,
         20, 22, 24, 25, 26, 25, 23, 21, 19, 18, 17, 16},
        {17, 17, 16, 16, 15, 15, 15, 16, 17, 18, 19, 20,
         21, 23, 25, 26, 27, 26, 24, 22, 20, 19, 18, 17},
        {18, 18, 17, 17, 16, 16, 16, 17, 18, 19, 20, 21,
         22, 24, 26, 27, 28, 27, 25, 23, 21, 20, 19, 18},
        {19, 19, 18, 18, 17, 17, 17, 18, 19, 20, 21, 22,
         23, 25, 27, 28, 29, 28, 26, 24, 22, 21, 20, 19},
        {20, 20, 19, 19, 18, 18, 18, 19, 20, 21, 22, 23,
         24, 26, 28, 29, 30, 29, 27, 25, 23, 22, 21, 20},
        {21, 21, 20, 20, 19, 19, 19, 20, 21, 22, 23, 24,
         25, 27, 29, 30, 32, 30, 28, 26, 24, 23, 22, 21}
    };

    int i = 0;
    for (int *p = temperatures[i]; p < temperatures[i] + 24; p++) {
        printf("%d ", *p);
    }

    return 0;
}
