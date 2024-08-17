#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    int dig1 = n / 10, dig2 = n % 10;

    printf("The reversal is: %d%d", dig2, dig1);

    return 0;
}
