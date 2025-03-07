#include <stdio.h>

int main () {
  /*
    Write a C program to print numbers from 0 to 10 and 10 to 0
    using two while loops.
   */
  int i = 0;

   // 0 to 10
   while (i <= 10) {
       printf("%d ", i);
       i++;
   }

   printf("\n");

   i = 10;

   // 10 to 0
   while (i >= 0) {
       printf("%d ", i);
       i--;
   }

  return 0;
}