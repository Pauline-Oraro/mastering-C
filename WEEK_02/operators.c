// operators are used to perform operations on variables and values.

// c divides the operators into: arithmetic, assignment, comparison, logical and bitwise operators.

// arithmetic operators are used to perform common mathematical operations like addition, subtraction, multiplication, division, modulus, increment and decrement.

// assignment operators are used to assign values to variables using the = operator. Most assignment operators are just shorter ways of writing code. For example x =+ 5 is the same as x = x + 5.

// comparison operators are used to compare two values and the return value is either 1 which is true or 0 which is false.

// logical operators are used to determine the logic between variables by combining multiple conditions. && returns 1 if both statements are true. || returns 1 if one of the statements is true. ! reverse the result and returns 0 if the result is 1.

// when a calculation contains more than one operator, C follows order of operations rules to decide which part to calculate first.

// Here are some common operators in C, from highest to lowest priority:

// () - Parentheses
// *, /, % - Multiplication, Division, Modulus
// +, - - Addition, Subtraction
// >, <, >=, <= - Comparison
// ==, != - Equality
// && - Logical AND
// || - Logical OR
// = - Assignment

#include <stdio.h>

int main(){
    int x = 10;
    int y = 5;


    printf("x is %d and y is %d the sum of x and y is %d\n", x, y, x+y );//addition

    printf("x is %d and y is %d the difference of x and y is %d\n", x, y, x-y ); //subtraction

    printf("x is %d and y is %d the product of x and y is %d\n", x, y, x*y ); //multiplication

    printf("x is %d and y is %d the quotient of x and y is %d\n", x, y, x/y ); // division

    printf("x is %d and y is %d the remainder of x and y is %d\n", x, y, x%y ); // modulus

    int z = 10;
    ++z;
    printf("z is %d\n", z); // increment increase the value by one

    int a = 15;
    --a;
    printf("a is %d\n", a); // decrement decrease the value by one

    int b = 20;
    int c = 30;
    int d = 30;
    int e = 40;
    printf("%d\n", b > c); // returns 0 which is false.
    printf("%d\n", c > b); // returns 1 which is true.
    printf("%d\n", b < c); // returns 1 which is true.
    printf("%d\n", c == d); // returns 1 which is true.
    printf("%d\n", c != b); // returns 1 which is true.
    printf("%d\n", e >= d); // returns 1 which is true.
    printf("%d\n", b <= e); // returns 1 which is true.

    int isLoggedIn = 1;
    int isAdmin = 0;

    printf("Regular user is logged in and is admin: %d\n", isLoggedIn && !isAdmin); // returns 1
    printf("Has access: %d\n", isLoggedIn || isAdmin); // 1
    printf("Not logged in: %d\n", !isLoggedIn); // 0

    // code challenge
    int itemPrice = 2000;
    int shippingCost = 1500;
    int sum = itemPrice + shippingCost;
    printf("The total cost is %d\n", sum);
    return 0; 
}