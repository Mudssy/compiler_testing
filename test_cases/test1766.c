
#include <stdio.h>

// Test if the compiler supports static assertions (_Static_assert) feature of C11.
void test_static_assert() {
    _Static_assert((sizeof(int) == 4), "This program requires that int is exactly 32 bits long.");
}

int main() {
    test_static_assert();
    
    // If we reach here, static assertions are supported. Print a specific output to verify this.
    printf("Static assertions supported.\n");
    
    return 0;
}
