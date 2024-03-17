
#include <stdio.h>

extern int llvmlibInterfaceStub();

int main() {
    int result = llvmlibInterfaceStub();
    
    if (result == 0) {
        printf("The undefined symbols in stubs feature is not supported.\n");
    } else if (result > 0) {
        printf("The undefined symbols in stubs feature is supported and returned: %d\n", result);
    } else {
        printf("An unknown error occurred. The return value from llvmlibInterfaceStub was: %d\n", result);
    }
    
    return 0;
}
