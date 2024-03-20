
#include <stdio.h>
void __attribute__((section("llvmlibInterfaceStub"))) stub_function() { printf("Inside stub function\n"); }
int main(void) {
    printf("Hello from the main function\n");
    stub_function();
}
