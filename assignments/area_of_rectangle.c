#include <stdio.h>

int main() {
  /*
    Write a C program to compute the perimeter and area of a
    rectangle with a height of 7 inches and width of 5 inches.
      Expected Output:
      Perimeter of the rectangle = 24 inches
      Area of the rectangle = 35 square inches

   */

  int height = 7;
  int width = 5;

  int area = height * width;

  printf("The height is: %d and the width is %d\nThe area is %d\n", height, width, area);

  return 0;
}