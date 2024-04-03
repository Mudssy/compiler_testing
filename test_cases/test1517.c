
#include <stdio.h>

void print_hello() {
    printf("Hello\n");
}

int main(void) {
    void (*funcPtr)() = &print_hello;  // Function-to-pointer decay feature
    funcPtr();  // Call the function via the function pointer
    return 0;
}
