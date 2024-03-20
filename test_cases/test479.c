
#include <stdio.h>

__attribute__((regparm(3)))  // The number inside the parentheses is how many parameters should be passed in registers.
void testFunction(__reg_unused int a, __reg_unused int b, int c) {
    printf("Value of C: %d\n", c);
}

int main() {
    // Test with some numbers to demonstrate the regparm attribute.
    testFunction(1, 2, 3);
    return 0;  // Make sure your program returns a value.
}
