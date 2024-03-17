
#include <stdio.h>

typedef void (*function_t)(void);

void func(void) __attribute__((cdecl));

int main() {
    function_t fptr = (function_t)&func;
    fptr();
    printf("Attribute cdecl test passed\n");
    return 0;
}

void func(void) {
    printf("Inside function with __attribute__((cdecl))\n");
}
