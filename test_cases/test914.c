
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int max;

#ifdef __OPTIMIZE__
    // This section is only compiled when the compiler is asked to optimize the code.
    // The following remark is in LLVM format, and will be recognized by compilers that use LLVM for their backend:
    // Expected output when remarks are emitted: "Optimizing code"
    __asm__("; <remarks>:1:1: remark: Optimizing code");
#endif

    if (a > b) {
        max = a;
    } else {
        max = b;
    }

    printf("The maximum value is %d\n", max);
    return 0;
}
