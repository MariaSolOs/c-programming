#include <stdbool.h>

struct point {
    int x, y;
};

struct rectangle {
    struct point upper_left, lower_right;
};

int area(struct rectangle r) {
    int base = r.lower_right.x - r.upper_left.x;
    int height = r.upper_left.y - r.lower_right.y;
    return base * height;
}

struct point center(struct rectangle r) {
    int center_x = (r.lower_right.x - r.upper_left.x) / 2;
    int center_y = (r.upper_left.y - r.lower_right.y) / 2;
    return (struct point){center_x, center_y};
}

struct rectangle move(struct rectangle r, int x, int y) {
    r.upper_left.x += x;
    r.upper_left.y += y;
    r.lower_right.x += x;
    r.lower_right.y += y;
    return r;
}

bool is_inside(struct rectangle r, struct point p) {
    return r.upper_left.x <= p.x && p.x <= r.lower_right.x &&
           r.lower_right.y <= p.y && r.upper_left.y >= p.y;
}
