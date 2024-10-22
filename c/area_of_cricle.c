// area of cricle

#include <stdio.h>
#include <math.h>

int main() {
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = M_PI * radius * radius;

    printf("The area of the circle is %.2f square units\n", area);

    return 0;
}
