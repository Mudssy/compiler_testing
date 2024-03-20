
#include <stdio.h>

int global_var = 10; // Global variable declared here
static int static_global_var = 20; // Static global variable declared here

void print_variables() {
    printf("Global Variable: %d\n", global_var);
    printf("Static Global Variable: %d\n", static_global_var);
}

int main() {
    int var = 30; // Local variable declared here
    static int static_var = 40; // Static local variable declared here
    
    print_variables(); // Prints global and static variables
    
    printf("Local Variable: %d\n", var);
    printf("Static Local Variable: %d\n", static_var);
    
    return 0;
}
