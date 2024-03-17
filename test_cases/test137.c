
#include <stdio.h>
#include <stdnoreturn.h>

// _Noreturn function specifier testing
_Noreturn void my_func(void) {
    printf("This is an example of a _Noreturn function specifier in action.\n");
    while (1); // Infinite loop to demonstrate noreturn behavior
}

int main() {
    printf("Testing the _Noreturn feature:\n");
    my_func(); // The _Noreturn attribute does not allow this call to be used in an expression.
    return 0;
}
