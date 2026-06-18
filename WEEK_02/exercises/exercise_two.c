// Write a C program that prompts the user to enter the length and width of a rectangle and calculates: The area of the rectangle and the perimeter of the rectangle.

#include <stdio.h>

int main(){
    int length, width, area, perimeter;
    printf("Enter the length: \n");
    scanf("%d", &length);
    printf("Enter the width: \n");
    scanf("%d", &width);

    area = length * width;
    printf("The area of a rectangle is: %d\n", area);

    perimeter =  2 * (length + width);
    printf("The perimeter of a rectangle is: %d\n", perimeter);
    return 0;
}