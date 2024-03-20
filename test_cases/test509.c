
#include <stdlib.h>
#include <stdio.h>

void check_cfi(int target) {
    // If the target address is not part of the __cfi_check function, abort() will be called.
    void (*funcptr)(void) = (void(*)(void))&__cfi_check;
    funcptr();
}

int main(void) {
    int target = 0xdeadbeef;  // This is the address we want to check for CFI.
    check_cfi(target);
    return EXIT_SUCCESS;
}
