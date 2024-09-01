#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int contents[SIZE];
int *top = &contents[0];

void stack_underflow(void) {
    printf("Stack underflow!");
    exit(EXIT_FAILURE);
}

void stack_overflow(void) {
    printf("Stack overflow!");
    exit(EXIT_FAILURE);
}

void make_empty(void) {
    top = contents;
}

bool is_empty(void) {
    return top == contents;
}

bool is_full(void) {
    return top == contents + SIZE;
}

void push(int i) {
    if (is_full()) {
        stack_overflow();
    } else {
        *top++ = i;
    }
}

int pop(void) {
    if (is_empty()) {
        stack_underflow();
    }
    return *--top;
}

int main(void) {
    push(1);
    push(2);
    push(3);
    printf("%d %d %d\n", pop(), pop(), pop());
    printf("Is it empty? %s", is_empty() ? "Yes" : "No");

    return 0;
}
