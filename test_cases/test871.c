
#include <stdio.h>

int main() {
    #pragma clang diagnostic push
    #pragma clang diagnostic error "-Wunknown-pragmas"
        #pragma llvm lib="llvm.remarks"
    #pragma clang diagnostic pop

    printf("Error feature for the C programming language and llvmlibRemarks section of the compiler has been tested.\n");
    return 0;
}
