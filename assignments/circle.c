#include <stdio.h>

int main() {
    /*
    Write a C program to compute the perimeter and area of a
    circle with a given radius.
    Expected Output:
        Perimeter of the Circle = 37.680000 inches
        Area of the Circle = 113.040001 square inches
     */

    int radius = 5;
    float pi = 3.14;

    float area = pi * radius * radius;
    float perimeter = 2 * pi * radius;

    printf("The area is: %.2f\n", area);
    printf("The perimeter is: %.2f\n", perimeter);

    return 0;
}