double median(double x, double y, double z) {
    double med;

    if (x <= y) {
        if (y <= z) {
            med = y;
        } else if (x <= z) {
            med = z;
        } else {
            med = x;
        }
    } else if (z <= y) {
        med = y;
    } else if (x <= z) {
        med = x;
    } else {
        med = z;
    }

    return med;
}
