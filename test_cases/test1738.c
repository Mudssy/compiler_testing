
#include <stdio.h>

// Global Variable
int global_var = 0;
static int static_var = 0;  // Static variable with initial value

void modifyGlobalVar() {
    global_var = 1;  // Modify the global variable
}

void printVars() {
    printf("Global Variable: %d\n", global_var);
    printf("Static Variable: %d\n", static_var);
}

int main() {
    modifyGlobalVar();  // Modify the global variable
    printVars();
    return 0;
}
