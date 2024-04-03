
#include <stdio.h>

// Global variable
int global_var = 1;

// Function prototype
void func_proto(void);

int main() {
    // Local variable
    int local_var = 2;
    
    printf("Global Variable: %d\n", global_var);
    printf("Local Variable: %d\n", local_var);
    
    func_proto();
    
    return 0;
}

// Function definition
void func_proto() {
    // Static variable
    static int static_var = 3;

    printf("Static Variable inside function: %d\n", static_var);
}
