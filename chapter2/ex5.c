#include <math.h>
#include <stdio.h>

float with_formula(float x) {
    return (3 * powf(x, 5)) + (2 * powf(x, 4)) - (5 * powf(x, 3)) -
           (powf(x, 2)) + (7 * x) - 6;
}

float with_horner(float x) {
    float result = (3 * x) + 2;
    result = (result * x) - 5;
    result = (result * x) - 1;
    result = (result * x) + 7;
    result = (result * x) - 6;
    return result;
}

int main(void) {
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);

    float polynomial = with_horner(x);
    printf("Polynomial: %.2f\n", polynomial);

    return 0;
}
