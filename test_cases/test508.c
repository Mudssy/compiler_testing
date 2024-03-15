
#include <stdio.h>

int main() {
    printf("Output before attribute.\n");

    int no_sanitize_coverage_func(void) __attribute__((no_sanitize("address", "undefined")));
    void no_sanitize_coverage_func(void) {
        // Some code that can be affected by sanitizers
    }
    
    printf("Output after attribute.\n");

    return 0;
}
