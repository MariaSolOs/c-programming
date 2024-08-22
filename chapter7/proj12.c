#include <stdio.h>

int main(void) {
    float expr;

    printf("Enter an expression: ");
    scanf("%f", &expr);

    char op;
    while ((op = getchar()) != '\n') {
        float n;
        if (op == '+') {
            scanf("%f", &n);
            expr += n;
        } else if (op == '-') {
            scanf("%f", &n);
            expr -= n;
        } else if (op == '*') {
            scanf("%f", &n);
            expr *= n;
        } else if (op == '/') {
            scanf("%f", &n);
            expr /= n;
        }
    }

    printf("Value of expression: %.1f", expr);

    return 0;
}
