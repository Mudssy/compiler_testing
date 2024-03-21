
#include <stdio.h>

void __attribute__((annotate("llvmlibRemarks"))) annotated_function(const char *msg) {
    printf("%s\n", msg);
}

int main() {
    annotated_function("This function is being annotated as a llvm lib remark.");
    return 0;
}
