// instead of writing many if else statements you can use the switch statement. The switch statement selects one of many code blocks to be executed.
/* this is how it works:
 1.the switch expression is evaluated once.
 2.the value of the expression is compared with the values of each case.
 3.if there is a match the associated block of code is executed.
 4.the break statement breaks out of the switch block and stops the execution.
 5.the default statement is optional and specifies some code to run if there is no case match.
 */

#include <stdio.h>

int main(){
    int day;
    printf("Enter any number between 1-7\n");
    scanf("%d", &day);

switch (day) {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
}
}