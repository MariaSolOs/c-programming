#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void stack_underflow(void) {
    printf("Stack underflow!");
    exit(EXIT_FAILURE);
}

void stack_overflow(void) {
    printf("Stack overflow!");
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

void push(char c) {
    if (is_full()) {
        stack_overflow();
    }
    contents[top++] = c;
}

char pop(void) {
    if (is_empty()) {
        stack_underflow();
    }
    return contents[--top];
}

int main(void) {
    printf("Enter parentheses and/or braces: ");

    bool valid_nesting = true;
    char c;
    while ((c = getchar()) != '\n') {
        if (c == '(' || c == '{') {
            push(c);
        } else {
            char popped;
            if (is_empty() || ((popped = pop()) == '(' && c != ')') ||
                (popped == '{' && c != '}')) {
                valid_nesting = false;
                break;
            }
        }
    }

    valid_nesting = valid_nesting && is_empty();

    printf("Parentheses/braces are ");
    if (!valid_nesting) {
        printf("not ");
    }
    printf("nested properly");

    return 0;
}
