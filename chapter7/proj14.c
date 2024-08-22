#include <math.h>
#include <stdio.h>

int main(void) {
    double x;
    printf("Enter a positive number: ");
    scanf("%lf", &x);

    double y = 1;
    while (1) {
        double new_y = (y + (x / y)) / 2;

        if (fabs(y - new_y) < 0.00001 * y) {
            break;
        } else {
            y = new_y;
        }
    }

    printf("Square root: %.5lf", y);

    return 0;
}
