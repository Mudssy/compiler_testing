
#include <stdio.h>

void function_stub(void) __attribute__((artificial));

void function_stub(void) {
    printf("Testing __attribute__((artificial)) in function stubs\n");
}

int main() {
    function_stub();
    return 0;
}
