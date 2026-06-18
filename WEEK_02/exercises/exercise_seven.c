// Write a C program that accepts marks for Mathematics, English, and Science and calculates: tatal marks and average marks

#include <stdio.h>
int main (){
    int maths, english, science, total;
    float average;

    printf("Enter your Mathematics score: \n");
    scanf("%d", &maths);

    printf("Enter your English score: \n");
    scanf("%d", &english);

    printf("Enter your Science score: \n");
    scanf("%d", &science);

    total = maths + english + science;
    printf("Your total marks are: %d\n", total);

    average = total / 3.0;
    printf("The average is %.2f\n", average);
    return 0;
}