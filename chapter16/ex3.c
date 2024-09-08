#include <stdio.h>

struct complex {
    double real, imaginary;
};

struct complex make_complex(double real, double imaginary) {
    return (struct complex){.real = real, .imaginary = imaginary};
}

struct complex add_complex(struct complex c1, struct complex c2) {
    return (struct complex){.real = c1.real + c2.real,
                            .imaginary = c1.imaginary + c2.imaginary};
}

int main(void) {
    struct complex c1, c2, c3;

    return 0;
}
