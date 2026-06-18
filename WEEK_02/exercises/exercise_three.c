//Write a C program that accepts a temperature in Celsius and converts it to Fahrenheit.

#include <stdio.h>

int main(){
    float temperature, fahrenheit;
    printf("Enter your temperature in Celsius: \n");
    scanf("%f", &temperature);

    fahrenheit = (temperature * 1.8) + 32;
    printf("Your temperature in Fahrenheit is: %.2f\n", fahrenheit);
    return 0;
}