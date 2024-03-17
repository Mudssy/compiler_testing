
#include <stdio.h>

// [[clang::libc]] is a non-standard GCC attribute used in the C language but ignored by other compilers
void __attribute__((annotate("clang_libindex"))) myPrintFunction(const char *str) {
    printf("%s\n", str);
}

int main() {
    myPrintFunction("Hello, World!");
    return 0;
}
