#include <math.h>

struct point {
    int x, y;
};

struct shape {
    enum { RECTANGLE, CIRCLE } shape_kind;
    struct point center;
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
};

int area(struct shape s) {
    if (s.shape_kind == RECTANGLE) {
        return s.u.rectangle.width * s.u.rectangle.height;
    }

    if (s.shape_kind == CIRCLE) {
        return s.u.circle.radius * s.u.circle.radius * M_PI;
    }

    return 0;
}

struct shape move(struct shape s, int x, int y) {
    s.center.x += x;
    s.center.y += y;

    return s;
}

struct shape scale(struct shape s, double c) {
    if (s.shape_kind == RECTANGLE) {
        s.u.rectangle.height *= c;
        s.u.rectangle.width *= c;
    }

    if (s.shape_kind == CIRCLE) {
        s.u.circle.radius *= c;
    }

    return s;
}
