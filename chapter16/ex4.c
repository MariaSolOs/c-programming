#include <stdio.h>

typedef struct {
    double real, imaginary;
} Complex;

Complex make_complex(double real, double imaginary) {
    return (Complex){.real = real, .imaginary = imaginary};
}

Complex add_complex(Complex c1, Complex c2) {
    return (Complex){.real = c1.real + c2.real,
                     .imaginary = c1.imaginary + c2.imaginary};
}

int main(void) {
    Complex c1, c2, c3;

    return 0;
}
