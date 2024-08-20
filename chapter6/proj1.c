#include <stdio.h>

int main(void) {
    float n, largest = 0;

    while (1) {
        printf("Enter a number: ");
        scanf("%f", &n);

        if (n <= 0) {
            break;
        }

        if (n > largest) {
            largest = n;
        }
    }

    printf("The largest number entered was %.2f", largest);

    return 0;
}
