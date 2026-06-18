// Write a C program that accepts a person's basic salary, bonus, and tax amount and calculates: Gross and net salary.

#include <stdio.h>

int main() {
    float salary, bonus, grossSalary, netSalary;
    float allowance = 5000;
    float tax, housingLevy = 0.015; 

    printf("Enter your basic salary amount: \n");
    scanf("%f", &salary);

    // Calculate bonus (5%)
    bonus = salary * 0.05;
    printf("Your bonus pay is: %.2f\n", bonus);

    // Gross salary
    grossSalary = salary + bonus + allowance;
    printf("Your gross salary is: %.2f\n", grossSalary);

    // Calculate deductions
    tax = grossSalary * 0.10;           // example: 10% tax
    housingLevy = grossSalary * 0.015;  // 1.5% housing levy

    printf("Tax deducted: %.2f\n", tax);
    printf("Housing levy deducted: %.2f\n", housingLevy);

    // Net salary
    netSalary = grossSalary - (tax + housingLevy);

    printf("Your net salary is: %.2f\n", netSalary);

    return 0;
}