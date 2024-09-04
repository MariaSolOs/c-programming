#include <stdio.h>

int main(void) {
    char *teens[] = {"ten",     "eleven",  "twelve",    "thirteen", "fourteen",
                     "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *tens[] = {"",      "",      "twenty",  "thirty", "forty",
                    "fifty", "sixty", "seventy", "eighty", "ninety"};
    char *ones[] = {"",     "one", "two",   "three", "four",
                    "five", "six", "seven", "eight", "nine"};

    int d1, d2;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &d1, &d2);

    printf("You entered the number ");

    if (d1 == 1) {
        printf("%s", teens[d2]);
    } else {
        printf("%s", tens[d1]);

        if (d1 == 0 && d2 == 0) {
            printf("zero");
        } else if (d1 > 0 && d2 > 0) {
            printf("-");
        }

        printf("%s", ones[d2]);
    }

    printf(".");

    return 0;
}
