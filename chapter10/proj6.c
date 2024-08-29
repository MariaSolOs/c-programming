#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void stack_underflow(void) {
    printf("Not enough operands in expression");
    exit(EXIT_FAILURE);
}

void stack_overflow(void) {
    printf("Expression is too complex");
    exit(EXIT_FAILURE);
}

void make_empty(void) {
    top = 0;
}

bool is_empty(void) {
    return top == 0;
}

bool is_full(void) {
    return top == STACK_SIZE;
}

void push(int c) {
    if (is_full()) {
        stack_overflow();
    }
    contents[top++] = c;
}

int pop(void) {
    if (is_empty()) {
        stack_underflow();
    }
    return contents[--top];
}

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
