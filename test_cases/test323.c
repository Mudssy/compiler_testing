
#include <stdio.h>

__attribute__((constructor)) // Annotate functions as initializers
void init_function() {
    printf("This is an initialization function\n");
}

int main() {
    printf("Hello, world!\n");
    return 0;
}
