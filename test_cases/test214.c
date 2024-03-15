
#include <stdio.h>

int main() {
    printf("This program checks trigraph ??= (#) conversion in C.\n");
#ifdef __clang__
    printf("Clang/LLVM detected...\n");
#   ifdef __has_feature(trigraphs)
        printf("Trigraph feature is supported by this compiler.\n");
#   else
        printf("Trigraph feature is not supported by this compiler.\n");
#   endif
#else
    printf("Clang/LLVM not detected. Can't check for trigraph support.\n");
#endif
    return 0;
}
