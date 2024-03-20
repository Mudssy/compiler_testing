
#include <stdio.h>

static int __attribute__((warn_unused_result)) foo(void) { return 1; }

int main() {
    foo(); // This should generate a warning because the result of foo is not used.
    printf("Testing warn_unused_result attribute...\n");
    return 0; // Main function always returns to end the program execution.
}
