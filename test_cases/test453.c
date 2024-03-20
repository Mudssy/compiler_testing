
#include <stdio.h>

void deprecated_function() __attribute__((deprecated("This function is deprecated. Use new_function instead.")));

void deprecated_function() {
    printf("Deprecated Function Used\n");
}

int main() {
    deprecated_function();  // This will produce a warning when compiled
    return 0;
}
