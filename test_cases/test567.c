
#include <stdio.h>

// This function will be used to test 'static' and 'extern'
int counter() {
    static int count = 0;   // Value is preserved between calls
    return ++count;
}

// This function will be used to test 'register'
void register_test(int x) {
    printf("Register variable: %d\n", x);  // x should be in a CPU register
}

// This function will be used to test 'auto'
void auto_test() {
    auto int num;   // Default storage class for all local variables
    printf("Auto variable: %d\n", num);
}

int main() {
    printf("Static and extern:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", counter());  // The 'static' keyword preserves state between calls
    }
    printf("\n\nRegister:\n");
    register int var_reg = 5;   // Recommended to store frequently used variables in a CPU register
    register_test(var_reg);     // This function should print the variable directly from a CPU register
    printf("Auto:\n");
    auto_test();                // The 'auto' keyword is default for local variables, but can be explicitly stated
    return 0;
}
