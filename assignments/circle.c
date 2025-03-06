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
    const float pi = 3.14;
    float perimeter = 2* pi *radius;
    float area = pi *radius*radius;
  
    printf("The perimeter of the circle = %.3f inches\n", perimeter);
    printf("The areas of the circle     = %.3f inches\n", area);

    return 0;
}