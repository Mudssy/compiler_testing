
#include <stdlib.h>
#include <stdio.h>

void printAndExit(const char* msg) {
    printf("%s\n", msg);
    exit(0); // This will terminate the program with a success status
}

// Use _Noreturn to tell the compiler that this function never returns,
// which it can use for optimization purposes.
_Noreturn void exampleFunction() {
    printAndExit("This line of code is executed");

    // This point is never reached because `exit` function was called above.
}

int main() {
    exampleFunction();
    
    return 0; // This will not be executed because `exampleFunction` terminates the program
}
