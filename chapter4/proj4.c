#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);

    int d1 = n % 8;
    n /= 8;
    int d2 = n % 8;
    n /= 8;
    int d3 = n % 8;
    n /= 8;
    int d4 = n % 8;
    n /= 8;
    int d5 = n % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", d5, d4, d3, d2, d1);

    return 0;
}
