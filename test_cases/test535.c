
#include <stdio.h>

int main() {
    void *return_address = __builtin_extract_return_addr(__builtin_return_address(0));
    printf("Current stack frame address: %p\n", return_address);
    
    if (__builtin_constant_p(return_address)) {
        printf("This address could be optimized away by the compiler, so this function may not return.\n");
        for (;;); // To make sure the program doesn't run forever
    } else {
        printf("This address will not be optimized away by the compiler, so this function should return normally.\n");
    }
    
    return 0;
}
