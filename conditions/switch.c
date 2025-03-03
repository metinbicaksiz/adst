#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {

    int grade = 90;

    switch (grade) {
      case 86 ... 100:
        printf("A \n");
        break;
      case 72 ... 85:
        printf("B \n");
        break;
      case 52 ... 71:
        printf("C \n");
        break;
      case 40 ... 51 :
        printf("D \n");
        break;
      case 0 ... 39 :
        printf("D \n");
        break;
       default:
         printf("Please enter a correct value \n");
         break;
    }

    return 0;
}