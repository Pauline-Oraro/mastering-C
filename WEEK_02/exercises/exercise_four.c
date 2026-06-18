// Write a C program that asks the user to enter their birth year and the current year and displays their age.

#include <stdio.h>
int main(){
    int birthYear, currentYear, age;

    printf("Which year were you born? \n");
    scanf("%d", &birthYear);

    printf("What is the current year? \n");
    scanf("%d", &currentYear);

    age = currentYear - birthYear;
    printf("You are %d years old", age);
    
    return 0;
}