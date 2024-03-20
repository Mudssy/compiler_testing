
#include <stdio.h>

void __attribute__((weak)) weak_func(void) {
    printf("Inside weak function\n");
}

int main() {
    if (weak_func) {
        weak_func();
    } else {
        printf("Weak function is not available\n");
    }
    
    return 0;
}
