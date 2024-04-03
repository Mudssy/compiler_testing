
#include <stdio.h>

void __llvm_profile_instrument_target() { }

int main() {
    printf("Hello World\n");
    return 0;
}
