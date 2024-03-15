
#include <stdio.h>

int main() {
    #pragma llvm __asm__("nop")
    printf("Pragma Directive feature for the llvm-build section is supported.\n");
    return 0;
}
