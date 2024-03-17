
#include <stdio.h>

int main() {
    #pragma clang diagnostic push
    #pragma clang diagnostic remark "-Wunknown-pragmas"
    printf("This is a test for the llvmlibRemarks feature.\n");
    #pragma clang diagnostic pop
    return 0;
}
