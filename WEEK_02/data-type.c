// data type specifies the size and type of information the variable will store.

// int stores whole numbers without decimal points.

// float stores fractional numbers containing one or more decimals points.

// char stores a single character/letter/ascii values. The character must be surrounded by single quotes. Do not use the char type to store multiple characters as it may produce errors. To store multiple characters use strings.

// double stores fractional numbers containing one or more decimals points with more precision than float.

// The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision of float is six or seven decimal digits, while double variables have a precision of about 15 digits. Therefore, it is often safer to use double for most calculations - but note that it takes up twice as much memory as float (8 bytes vs. 4 bytes).

// there are different format specifiers for each data type:
// %d or %i for int
// %f or %F for float
// %c for char
// %lf for double
// %s for strings

// memory size refers to how much space a type occupies in the computer's memory. Knowing the size of data types helps you understand how much memory your program uses and this is important when writing larger programs or working with limited memory because it can affect both performance and efficiency.

// more data types include:
// short int (short) - typically 2 bytes, used for smaller integer values.
// long int (long) - typically 4 bytes, used for larger integer values.
// long long int (long long) - typically 8 bytes, used for very large integer values.
// unsigned int - typically 4 bytes, used for non-negative integer values (0 and above).


#include <stdio.h>

int main(){
    char myGrade = 'A';
    printf("My grade is %c\n", myGrade);

    int myNumber = 7;
    printf("My number is %d\n", myNumber);

    float myDecimal = 3.333;
    printf("My decimal is %f\n", myDecimal);

    double myPreciseDecimal = 3.141592653589793;
    printf("My precise decimal is %lf\n", myPreciseDecimal);
    return 0;
}