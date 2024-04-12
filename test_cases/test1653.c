
#include <stdio.h>

int main() {
    int var = 10;  // A regular variable
    printf("Value of var = %d\n", var);

    const int constantVar = 20;  // Constant Variable (can't be modified)
    printf("Value of constantVar = %d\n", constantVar);
    // Trying to modify a constant variable will result in an error
    // constantVar = 30; 

    volatile int volatileVar = 30;  // Volatile Variable (can be used by signal handlers)
    printf("Value of volatileVar = %d\n", volatileVar);
    // Modifying a volatile variable is allowed, but the compiler should not optimize it away or make any assumptions about its value.
    volatileVar = 40; 
    printf("New Value of volatileVar = %d\n", volatileVar);

    return 0;
}
