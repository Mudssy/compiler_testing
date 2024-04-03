
#include <stdio.h>
#include <setjmp.h>  // For jmp_buf and longjmp functions

void noreturn_function() __attribute__((noreturn));
static jmp_buf buf;  // A buffer to hold the state of the stack
int error = 0;       // Variable to signal an exception (error)

int main(void) {
    if (!setjmp(buf)) {  // Save current program state in buf and return 0 on first call.
        noreturn_function();
    } else {              // The function setjmp returns non-zero when longjmp is called, therefore we handle the exception here.
        if (error)
            printf("Error occurred.\n");  // Print error message.
    }
}

void noreturn_function() {
    error = 1;           // Set to 1 in case an error occurs.
    longjmp(buf, 1);     // Jump back to a saved state of the program and set return value to 1 (as specified).
}
