
#include <stdio.h>
#include <assert.h>

void* get_stack() {
    void *result = __builtin_frame_address(0);
    return result;
}

int main() {
    int dummy;  // This local variable is necessary to allow the compiler to generate a stack frame on some systems.

    printf("Stack address: %p\n", get_stack());
    
    assert(get_stack() != NULL);  // This check should fail if the feature doesn't work as expected.

    return 0;
}
