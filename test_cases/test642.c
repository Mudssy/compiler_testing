
#include <stdio.h>

int main() {
    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wunused-label"
#line 10 "LineControlTestFile"
    goto label;
    printf("This line should not be executed.\n");
label:
    printf("Output from Line Control feature test for llvm-build section of the compiler.\n");
    #pragma clang diagnostic pop
    return 0;
}
