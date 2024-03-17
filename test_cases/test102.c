
#include <stdio.h>

int global_variable = 10; // global variable

void print_global(void) { 
    printf("%d\n", global_variable);
}

extern void print_external() __attribute__((section("llvmutilscount"))); // extern function declaration

int main(void) { 
    print_global();
    print_external();
    return 0;
}
