#include <stdbool.h>
#include <stdio.h>

int main(void) {
    long n;

    while (1) {
        printf("Enter a number: ");
        scanf("%ld", &n);

        if (n <= 0) {
            break;
        }

        bool seen[10] = {false};
        int digit;
        while (n) {
            digit = n % 10;
            if (seen[digit]) {
                break;
            }
            seen[digit] = true;
            n /= 10;
        }

        if (n) {
            printf("Repeated digit\n");
        } else {
            printf("No repeated digit\n");
        }
    }

    return 0;
}
