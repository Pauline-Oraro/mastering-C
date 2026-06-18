// 1. Write a C program that prompts the user to enter two numbers and displays their sum, difference, product, quotient, and remainder.

#include <stdio.h>

int main() {
    int num1, num2, sum, subtract, multiply, divide, modulus;

    printf("Enter the first number: \n");
    scanf("%d", &num1);
    printf("Enter the second number: \n");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("The sum is: %d\n", sum);

    subtract = num1 - num2;
    printf("The difference is: %d\n", subtract);

    multiply = num1 * num2;
    printf("The product is: %d\n", multiply);

    divide = num1 / num2;
    printf("The quotient is: %d\n", divide);

    modulus = num1 % num2;
    printf("The remainder is: %d\n", modulus);
    return 0;
}