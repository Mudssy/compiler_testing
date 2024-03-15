
#include <stdio.h>

int import_function(void);

int main() {
    int result = import_function();
    printf("Result from imported function: %d\n", result);
    return 0;
}

int import_function(void) {
    return 42;
}
