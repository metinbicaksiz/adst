#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {

    int grade = 70;

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
      case 0 ... 51 :
        printf("D \n");
        break;
       default:
         printf("F \n");
         break;
    }

}