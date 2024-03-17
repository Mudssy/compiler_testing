
#include <stdio.h>

int main() {
    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wunknown-pragmas"
    #pragma clang remark - Hotness 10
    printf("Output based on Handling of Remark Hotness feature for the llvmlibRemarks section of the compiler.\n");
    #pragma clang diagnostic pop
    return 0;
}
