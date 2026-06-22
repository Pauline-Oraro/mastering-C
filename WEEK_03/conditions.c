// c supports comparison conditions like less than (<), less than or equal to(<=), greater than(>), greater than or equal to(>=), equal to(==) and not equal to(!=).

// the above conditions can be used to perform different actions for different decisions.

// c has the following conditional statements:

// if is used to specify a block of code to be executed if a specified condition is true.
// else is used to specify a block of code to be executed if the same condition is false.
// else if is used to specify a new condition to test if the first condition is false
// switch is used to specify many alternative blocks of code to be executed.

#include <stdio.h>
#include <stdbool.h>

int main(){
    //specify a block of code to be executed if a condition is true.
    if (111 > 100){
        printf("111 is greater than 100\n");
    }

    int firstNumber = 100;
    int secondNumber = 50;
    if (firstNumber > secondNumber){
        printf("The first number which is %d is greater than the second number which is %d\n", firstNumber, secondNumber);
    }

    //specify a block of code to be executed if the condition is false. executes a block of code if the condition is false.

    int time = 20;
    if (time < 20){
        printf("Have a good day\n");
    } else {
        printf("Have a good evening\n");
    }

    // specify a new condition to test if the first condition is false. you can use else if to check multiple conditions, one after another. the conditions are checked from top to bottom and as soon as one condition is true, its block of code runs and the rest are skipped.

    int age = 16 ;

    if (age < 12){
        printf("You are not qualified because you are still a child\n", age);
    } else if (age < 19) { 
        printf("You are not qualified because you are still a teenager\n", age);
    } else {
        printf("You are qualified because you are an adult\n", age);
    }

    // short hand if else also known as the ternary operator returns a value based on a condition: if the condition is true, it returns the first value otherwise it returns the second value. it can be used to replace multiple lines of code with a single line and is often used to replace simple if else statements.

    int myAge = 25; (myAge < 18) ? printf("You are not qualified to vote") : printf("You are qualified to vote\n");

    // nested if means that you place an if statement inside another if statement. it lets you check for a condition only if another condition is already true. Nested if statements are useful when you need to test multiple conditions that depend on each other.

    int adultAge = 20;
    bool isCitizen = true;

    if (adultAge >= 18){
        printf("Old enough to vote\n");

        if (isCitizen){
            printf("You can vote because you are a citizen\n");
        } else {
            printf("You must be a citizen so that you can vote\n");
        }
    } else {
        printf("Not old enough to vote\n");
    }

    // use AND (&&) when both conditions must be true
    int a = 200;
    int b = 30;
    int c = 500;

    if (a > b && c > b){
        printf("Both conditions are true\n");
    }

    // use OR (||) when at least one of the conditions can be true
    if (a > b || a > c) {
        printf("At least one condition is true\n");
    }

    // NOT (!) reverses a condition, if a condition is true
    int d = 30;
    int e = 100;
    if (!(d > e)) { 
        printf("d is NOT greater than e\n");
    }
    return 0;

}