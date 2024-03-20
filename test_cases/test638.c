
#include <stdio.h>

// Define a macro here for testing purposes
// #define LLVM_BUILD 1

void llvm_build(void) {
    printf("LLVM Build\n");
}

void other_build(void) {
    printf("Other Build\n");
}

int main() {
#ifdef LLVM_BUILD
    llvm_build();
#else
    other_build();
#endif

    return 0; // Make sure the program always returns
}
