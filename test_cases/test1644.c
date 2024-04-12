
#include <stdio.h>

int main() {
    #ifdef __clang_version__
        printf("Compiler supports the '#endif' feature in the 'clanglibFrontendTool' section.\n");
    #else
        printf("Compiler does not support the '#endif' feature in the 'clanglibFrontEndTool' section.\n");
    #endif
    return 0;
}
