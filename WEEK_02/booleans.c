// c has a bool data type that has true and false values.

// it is not an inbuilt data type and you must include #include <stdbool.h> header so that you can use it.

// a boolean variable is declare with the bool keyword and can take the values true or false.

// boolean values are returned as integers, 1 represents true and 0 represents false. therefore you can use the %d format specifier to print a boolean value.

// it is common to get boolean values by comparing values and variables.

#include <stdio.h>
#include <stdbool.h>

int main(){
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    printf("%d\n", isProgrammingFun);
    printf("%d\n", isFishTasty);
    printf("%d\n", 10 > 9);

    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;
    printf("%d\n", isHamburgerTasty == isPizzaTasty);

    int myAge = 25;
    int votingAge = 18;

    printf("%d\n", myAge >= votingAge);
    return 0;
}