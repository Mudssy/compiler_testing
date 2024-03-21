
#include <stdio.h>

int main(void) {
    const char *version = __builtin_llvmlibc_getLibremarkVersion();
    
    printf("%s\n", version ? "Note feature is supported" : "Note feature is not supported");

    return 0;
}
