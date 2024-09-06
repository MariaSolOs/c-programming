#include <ctype.h>
#include <stdio.h>

#include "stack.h"

int main(void) {
    char c;

    while (1) {
    enter:
        printf("Enter an RPN expression: ");
        while (1) {
            scanf(" %c", &c);
            if (isdigit(c)) {
                push(c - '0');
            } else {
                int x, y;
                switch (c) {
                    case '+':
                        x = pop();
                        y = pop();
                        push(x + y);
                        break;
                    case '-':
                        x = pop();
                        y = pop();
                        push(y - x);
                        break;
                    case '*':
                        x = pop();
                        y = pop();
                        push(x * y);
                        break;
                    case '/':
                        x = pop();
                        y = pop();
                        push(y / x);
                        break;
                    case '=':
                        printf("Value of expression: %d\n", pop());
                        make_empty();
                        goto enter;
                    default:
                        goto exit;
                }
            }
        }
    }

exit: {};

    return 0;
}
