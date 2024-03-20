
#include <stdio.h>

// Declare a variable with threadlocal storage duration and acquire after attribute.
_Thread_local int x __attribute__((acquired_after(10))) = 42;

int main() {
    printf("The value of x is %d\n", x);
    return 0; // This ensures that the program returns, instead of running forever.
}
