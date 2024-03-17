
#include <stdio.h>
#include "llvm-dwarf.h"

int main() {
    int a = 10;
    int b = 20;
    printf("This program checks LLVM Debug Information Generation for the C programming language.\n");
    printf("Values of variables a and b are: %d, %d\n", a, b);
    
    /* Insert debug information using llvm-dwarf.h */
    DWARF_INSERT_DEBUG_INFO(a);
    DWARF_INSERT_DEBUG_INFO(b);
    
    printf("Debug Information Generated Successfully.\n");
    return 0;
}
