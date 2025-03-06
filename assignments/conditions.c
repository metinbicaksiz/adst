#include <stdio.h>

int main() {
    /*
    Write a C program to read the age of a candidate and
    determine whether he is eligible to cast his/her own vote.
    Test Data : 21
    Expected Output :
    Congratulation! You are eligible for casting your vote.

    Please use if conditions.
     */
    int age = 16;


   if (age >= 18) {
       printf("Congratulations! You are eligible for casting your vote.\n");
   } else {
       printf("Sorry! You are not eligible to vote yet.\n");
   }

    return 0;
}