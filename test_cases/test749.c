
#include <stdio.h>

void test_function(int arg1, int arg2) __attribute__((sentinel));

void test_function(int arg1, int arg2) {
    printf("Arg1: %d, Arg2: %d\n", arg1, arg2);
}

int main() {
    // Test case 1: Two arguments provided.
    test_function(1, 0);
    
    // Test case 2: Two equal arguments provided.
    test_function(3, 3);
    
    // Test case 3: Zero sentinel argument provided.
    test_function(5, 0);
    
    return 0;
}
