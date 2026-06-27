// when you know exactly how many times you want to loop through a block of code use the for loop instead of a while loop
// for (expression 1; expression 2; expression 3) {}:

/* Expression 1 is executed one time before the execution of the code block.
Expression 2 defines the condition for executing the code block.
Expression 3 is executed (every time) after the code block has been executed.
 */

#include <stdio.h>

int main(){
    // statement 1 sets a variable before the loop starts. Statement 2 defines the condition for the loop to run, if the condition is true, the loop will start over again, if it is false the loop will end. Statement 3 increase a value each time the code block in the loop has been executed
    int i;
    for(i = 0; i < 5; i++){
        printf("%d\n", i);
    }

    // print even numbers
    int even;

    for(even = 0; even <= 10; even = even + 2){
        printf("%d\n", even);
    }

    // sum of numbers, calculate the sum of numbers from 1 to 5
    int sum = 0;
    int a;
    for (a = 1; a <= 5; a++){
        sum = sum + a;
    }
    printf("Sum is %d\n", sum);

    // countdown from 5 to 1
    int countdown;
    for(countdown = 5; countdown > 0; countdown--){
        printf("%d\n", countdown);
    }
}