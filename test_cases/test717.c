
#include <stdio.h>

void __attribute__((weak)) weak_fn() {
    printf("Default definition\n");
}

int main(void) {
    if (weak_fn != NULL && weak_fn != 0) { // Weak symbol may not be defined
        weak_fn();
    } else {
        printf("Weak function is undefined.\n");
    }
    return 0;
}
