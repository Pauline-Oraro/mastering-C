// loops can execute a block of code as long as a specified condition is true. Loops save time, reduce errors and they make code more readable.

// the while loop repeats a block of code as long as a specified condition is true.

// a while loop may never run if the condition is false from the start.

// the do while loop is a variant of the while loop. This loop will execute the code block once before checking if the condition is true then it will repeat the loop as long as the condition is true.

#include <stdio.h>

int main(){
    // the code in the loop will run over and over again as long as the variable i is less than 5.
    int i = 0;

    while (i < 5){
        printf("%d\n", i);
        i++;
    }

    int countdown = 3;

    while (countdown > 0){
        printf("%d\n", countdown);
        countdown--;
    }
    printf("Happy new year\n");

    // the loop will always be executed at least once even if the condition is false because the code block is executed before the condition is tested.
    int a = 0;

    do {
        printf("%d\n", a);
        a++;
    }
    while (a < 5);

    // a while loop to reverse some numbers
    int numbers = 12345;
    int revNumbers = 0;

    while (numbers) {
        revNumbers = revNumbers * 10 + numbers % 10;
        numbers /= 10;
    }
    printf("%d", revNumbers);
    return 0;
}