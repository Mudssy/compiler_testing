
#include <stdio.h>

int global_variable = 10;  // Global variable

void print_global(void) { 
    printf("%d\n", global_variable);
}

extern void print_external() __attribute__((section("llvmutilscount"))); // Extern function declaration

int main(void) { 
    print_global();
    print_external();
    return 0;
}

// External Function Definition 
void print_external() {
    printf("%d\n", global_variable + 1);
}
