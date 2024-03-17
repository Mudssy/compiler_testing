
#include <stdio.h>

int main() {
    #pragma clang attribute push (__attribute__((disable_tail_calls())), apply_to=function)
    
    printf("This line is printed when disable_tail_calls attribute is disabled.\n");  // This line will be executed normally.
    
    #pragma clang attribute pop

    return 0;
}
