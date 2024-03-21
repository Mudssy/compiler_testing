
#include <stdio.h>

int main() {
    __builtin___clear_cache((void*)0, (void*)0); // This is an llvm intrinsic for llvmlibRemarks test.
    fprintf(stderr, "Cache cleared.\n"); 
}
