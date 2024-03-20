
#include <stdio.h>

// This is a simple test case that uses the `__attribute__((swift_name))` annotation to rename a variable and function in Swift.
int __attribute__((swift_name("renamedVariable"))) renamedVariable = 10;
void __attribute__((swift_name("renamedFunction"))) renamedFunction() { 
    printf("This is from the 'renamedFunction'\n");
}

int main() {
    // Test `renamedVariable` in Swift to ensure it has the expected value.
    if (renamedVariable != 10) {
        printf("Test failed: renamedVariable has unexpected value.\n");
        return 1;
    }
    
    // Call `renamedFunction` and expect no output (because the function doesn't produce any in this test).
    renamedFunction();
    
    printf("All tests passed.\n");
    return 0;
}
