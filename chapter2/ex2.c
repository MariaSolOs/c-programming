#include <stdio.h>

#define PI 3.1416f

int main(void) {
    float radius;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    float volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

    printf("Volume of a sphere with radius %.1f: %.1f\n", radius, volume);

    return 0;
}
