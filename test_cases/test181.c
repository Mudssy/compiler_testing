
#include <stdio.h>

// Emulate deleted function
int __attribute__((deprecated)) deprecated_function() {
    return 0;
}

// Emulate defaulted function
static inline int defaulted_function() {
    return 42;
}

int main() {
    
    // Test deleted function
    printf("Deleted function: %d\n", deprecated_function());
    
    // Test defaulted function
    printf("Defaulted function: %d\n", defaulted_function());

    return 0;
}
