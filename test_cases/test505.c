
#include <stdio.h>

int main() {
    int x = 0;
    
    if (__has_feature(memory_sanitizer)) {
        // Code for Compiler with Memory Sanitization
        printf("Compiler with No Sanitize Memory Attributes\n");
        x = __no_sanitize_arg("Memory", 42);
    } else {
        // Code for Normal Compiler
        printf("Normal Compiler or Non-Supported Feature\n");
        x = 1;
    }
    
    printf("Output: %d\n", x);

    return 0;
}
