
#include <stdio.h>

int main() {
    printf("Starting program...\n");
    
#ifndef __clang__
    #error "This code must be compiled with clang."
#endif
    
    printf("Program finished successfully.\n");
    return 0;
}
