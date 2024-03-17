
#include <stdio.h>

extern void llvmlibInterfaceStub(void);

int main() {
    printf("Testing Linkage type handling for symbols in stubs.\n");

    llvmlibInterfaceStub();

    return 0;
}
