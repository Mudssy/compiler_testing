
#include <stdio.h>

void print_hello() __attribute__((flatten));

int main() {
    print_hello();
    return 0;
}

void print_hello() {
    printf("Hello, world! This function was flattened.\n");
}
