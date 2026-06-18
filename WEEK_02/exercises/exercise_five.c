// Write a C program that prompts the user to enter an amount in Kenyan shillings and converts it to US dollars using a given exchange rate.

#include <stdio.h>

int main() {
    float kenyanShilling, usDollar;

    printf("Enter amount in Kenyan Shillings: \n");
    scanf("%f", &kenyanShilling);

    usDollar = kenyanShilling / 129.45;
    printf("%.2f Kenyan Shillings is %.2f us dollars\n", kenyanShilling, usDollar);
    return 0;
}