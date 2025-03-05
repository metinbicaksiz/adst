 #include <stdio.h>

int main() {
    /*
    Write a C program calculates the sum of the two integers.
    Test Data :
    Input the first integer: 25
    Input the second integer: 38
    Expected Output:
Sum of the above two integers = 63
     */
    int num1 = 25;
    int num2 = 50;
    int sum;

    printf("The first number is: %d\n", num1);
    printf("The second number is: %d\n", num2);
    sum = num1 + num2;
    printf("Sum of the above two number is = %d\n", sum);

    int multiply = num1*num2;
    float divide = (float)num1 / num2;

    printf("The multiplication is: %d\n", multiply);
    printf("The division is: %.2f\n", divide);


    return 0;
}