#include <stdio.h>

int main(void) {
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    int occurrences[10] = {0};
    for (int digit = n % 10; n > 0; n /= 10, digit = n % 10) {
        occurrences[digit] += 1;
    }

    printf("Digit:\t\t");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", i);
    }

    printf("\n");

    printf("Occurrences:\t");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", occurrences[i]);
    }

    return 0;
}
