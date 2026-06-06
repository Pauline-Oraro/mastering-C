// variables are containers used for storing data values like numbers and characters.

// in c variables must have a specific type which tells the program what kind of data the variable can store.

// to declare a variable you must specify the type and give the variable a name

// to assign a value to a variable you can use the assignment operator (=)

// format specifiers are used together with the printf() function to print variables. It is a placeholder that tells C what kind of value will be printed. It always starts with a percentage sign followed by a letter.

// if you assign a new value to an existing variable, the new value will replace the old one

// all c variables must be identified with unique names and these unique names are called identifiers.

// use descriptive names in order to create understandable and maintainable code.

// variable names can contain letters, digits and underscores.

// variable names must begin with a letter or an underscore.

// variable names are case-sensitive, which means that myAge and myage are considered different variables.

// variable names cannot contain whitespaces or special  characters (except for underscores).

// reserved keywords such as int cannot be used as variable names.

#include <stdio.h>

int main(){
    int myAge = 22;
    printf("My age is %d\n", myAge); // %d is the format specifier for integers

    float pi = 3.14;
    printf("Pi is %f\n", pi); // %f is the format specifier for floating-point numbers

    char myGrade = 'A';
    printf("My grade is %c\n", myGrade); // %c is the format specifier for characters

    myAge = 23; // assigning a new value to the existing variable myAge
    printf("My new age is %d\n", myAge); // the new value will replace the old one
    return 0;
}