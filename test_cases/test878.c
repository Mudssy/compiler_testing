
#include <stdio.h>

int main() {
#pragma clang diagnostic push
#pragma clang diagnostic remark "-WllvmlibRemarks"
    printf("Output based on llvmlibRemarks feature\n");
#pragma clang diagnostic pop
    return 0;
}
