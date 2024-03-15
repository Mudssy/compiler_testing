
#include <stdio.h>
#include <sanitizer/common_interface_defs.h>

__attribute__((noinline)) void stack_use() {
    char buffer[1024];
    __sanitizer_print_stack_trace();
}

int main(void) {
    printf("Running C program to test the Sanitize Safe Stack Attributes feature...\n");
    stack_use();
    return 0;
}
