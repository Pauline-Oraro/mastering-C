#include <stdio.h> // tells c to include a header file and this header file let us use input/output functions such as printf()

// main() function is a special function in C that serves as the entry point of the program. When you run a C program, the execution starts from the main() function. It is where you write the code that you want to execute when the program runs.

int main(){
    printf("Hello World!\n");// printf() function is used to output text to the screen.

    printf("This is my first C program.\n"); // to start a new line, we can use the newline character \n. It tells the program to move the cursor to the next line after printing the text.

    printf("I will enjoy learning C.\n");

    return 0; // ends the main() function and sends a value back to the operating system. In this case, it returns 0, which typically indicates that the program executed successfully.
}

// every c statement ends with a semicolon (;). This is a syntax rule in C that indicates the end of a statement. if you forget the semicolon, the compiler will show an error and the program will not run.

// the compiler ignores extra spaces and new lines.