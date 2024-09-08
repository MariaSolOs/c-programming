#include <stdbool.h>

struct color {
    int red, green, blue;
};

int bound_color(int c) {
    if (c < 0) {
        return 0;
    }
    if (c > 255) {
        return 255;
    }
    return c;
}

struct color make_color(int red, int green, int blue) {
    return (struct color){bound_color(red), bound_color(green),
                          bound_color(blue)};
}

int get_red(struct color c) {
    return c.red;
}

bool equal_color(struct color c1, struct color c2) {
    return c1.red == c2.red && c1.green == c2.green && c1.blue == c2.blue;
}

struct color brighter(struct color c) {
    const struct color BLACK = (struct color){0, 0, 0};

    if (equal_color(c, BLACK)) {
        return (struct color){3, 3, 3};
    }

    if (c.red > 0 && c.red < 3) {
        c.red = 3;
    }
    if (c.red > 0 && c.green < 3) {
        c.green = 3;
    }
    if (c.red > 0 && c.blue < 3) {
        c.blue = 3;
    }

    return (struct color){bound_color(c.red / 0.7), bound_color(c.green / 0.7),
                          bound_color(c.blue / 0.7)};
}

struct color darker(struct color c) {
    return (struct color){c.red * 0.7, c.green * 0.7, c.blue * 0.7};
}
