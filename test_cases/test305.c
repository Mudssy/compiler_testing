
#include <stdio.h>
#include "clang-c/Index.h"

int main() {
    CXIndex index = clang_createIndex(0, 0);
    
    if (index) {
        printf("Clang plugin support is available.\n");
        clang_disposeIndex(index);
    } else {
        printf("Clang plugin support is not available.\n");
    }
    
    return 0;
}
