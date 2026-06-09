// type conversion is converting the value of one data type to another type.

// implicit conversion is done automatically by the compiler when you assign a value of one type to another.

// implicit conversion can be risky as you might lose control over specific values in certain situations. For example, if you assign a float value to an int variable, the decimal part will be truncated, which can lead to loss of precision.

// explicit conversion is done manually by placing the type in parentheses () in front of the value.

#include <stdio.h>

int main(){
    float myFloat = 9;
    printf("%f\n", myFloat); // the compiler automatically converts the int value 9 to a float value of 9.000000

    int myInt = 3.14;
    printf("%d\n", myInt); // the compiler automatically converts the float value 3.14 to an int value of 3, which results in the loss of the decimal part.

    float sum = (float) 5 + 2; // the (float) before the 5 explicitly converts the integer value 5 to a float value of 5.0, and then adds it to the integer value 2, resulting in a float value of 7.0.
    printf("%f\n", sum);
}