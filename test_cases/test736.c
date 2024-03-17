
#include <stdio.h>

void stub_function(void) __attribute__((weak));

void stub_function(void) {
    printf("Weak function called.\n");
}

int main() {
    if (stub_function) {
        stub_function();
    } else {
        printf("Weak function not available.\n");
    }

    return 0;
}
