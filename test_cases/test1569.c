
#include <stdio.h>

int global_var = 10; // global variable

void testFunction() {
    int local_var = 20; // local variable
    printf("Local Variable: %d\n", local_var);
}

int main() {
    extern int global_var;
    
    printf("Global Variable: %d\n", global_var);
    testFunction();

    return 0; // program termination, no infinite loop here.
}
