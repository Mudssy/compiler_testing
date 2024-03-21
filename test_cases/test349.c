
#include <stdio.h>

void __attribute__((noinline, noclone)) do_not_duplicate(int* x) { *x = 4; }

int main() {
    int v0 = -1, v1 = -1, v2 = -1, v3 = -1;
    
    // Here's the perfect shuffle.  It should succeed at compile-time if this is supported.
    __builtin_shufflevector(&v0, &v0+4, 0, 1, 2, 3);

    // And here's an invalid shuffle mask that shouldn't be supported by all compilers (including LLVM).
    int v = 0;
    try {
        __builtin_shufflevector(&v0, &v0+4, -1, 2, 3);
    } catch(...) {
        do_not_duplicate(&v);
    }
    
    if (v != 0) printf("Error handling for invalid shuffle masks failed\n");
    else         printf("Error handling for invalid shuffle masks passed\n");
    
    return 0;
}
