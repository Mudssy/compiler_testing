
#include <stdio.h>

int main() {
    __builtin_expect(1, 0); // Disable remark.
    
    printf("This output should not have a remark.\n");

    __builtin_expect(0, 1); // Enable remark.

    printf("This output should have a remark.\n");

    return 0; // Main function must always return to avoid infinite loops or segfaults.
}
