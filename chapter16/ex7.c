struct fraction {
    int numerator, denominator;
};

int gcd(int m, int n) {
    while (n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }

    return m;
}

struct fraction reduce(struct fraction f) {
    int divisor = gcd(f.numerator, f.denominator);
    return (struct fraction){.numerator = f.numerator / divisor,
                             .denominator = f.denominator / divisor};
}

struct fraction add(struct fraction f1, struct fraction f2) {
    return reduce((struct fraction){
        .numerator =
            (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator),
        .denominator = f1.denominator * f2.denominator});
}

struct fraction subtract(struct fraction f1, struct fraction f2) {
    return add(f1, (struct fraction){.numerator = -f2.numerator,
                                     .denominator = -f2.denominator});
}

struct fraction multiply(struct fraction f1, struct fraction f2) {
    return reduce(
        (struct fraction){.numerator = f1.numerator * f2.numerator,
                          .denominator = f1.denominator * f2.denominator});
}

struct fraction divide(struct fraction f1, struct fraction f2) {
    return multiply(f1, (struct fraction){.numerator = f2.denominator,
                                          .denominator = f2.numerator});
}
