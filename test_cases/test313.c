
#include <stdio.h>

int __attribute__((nonnull)) nonnull_function(int *ptr) {
    if (ptr == NULL) {
        return -1;
    }
    return *ptr;
}

void __attribute__((deprecated)) deprecated_function() {
    printf("This function is deprecated.\n");
}

int main() {
    int x = 42;
    int result = nonnull_function(&x);
    printf("Result of nonnull_function: %d\n", result);

    deprecated_function();

    return 0;
}
