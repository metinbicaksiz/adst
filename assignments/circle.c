#include <stdio.h>

int main() {
    /*
    Write a C program to compute the perimeter and area of a
    circle with a given radius.
    Expected Output:
        Perimeter of the Circle = 37.680000 inches
        Area of the Circle = 113.040001 square inches
     */
        float radius= 6;
        const float PI= 3.1416;
        float perimeter= 2 * PI * radius;
        float area= PI * radius * radius;

        printf("Perimeter of the circle = %.2f inches\n",perimeter);
        printf("Area of the Circle      = %.2f square inches\n", area);

    int radius = 5;
    float pi = 3.14;

    float area = pi * radius * radius;
    float perimeter = 2 * pi * radius;

    printf("The area is: %.2f\n", area);
    printf("The perimeter is: %.2f\n", perimeter);

    return 0;
}