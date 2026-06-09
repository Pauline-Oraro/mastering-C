// the const keyword makes a variable unchangeable and read-only.

// you should always declare a variable as const when you have values that are unlikely to change.

// when you declare a constant variable it must be assigned with a value.

// it is considered good practice to declare them with uppercase but it not required but it is useful for code readability and common for C programmers.

#include <stdio.h>

int main(){
    const int DAYS_ON_WEEK = 7;
    printf("There are %d days in a week.\n", DAYS_ON_WEEK);
    // DAYS_ON_WEEK = 8; // this will cause a compile-time error because you cannot change the value of a constant variable.

    const int BIRTHYEAR = 2004;
    const int CURRENT_YEAR = 2026;
    printf("My birth year is %d and the current year is %d\n", BIRTHYEAR, CURRENT_YEAR);
    return 0;
}