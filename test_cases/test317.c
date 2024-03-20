
#include <stdio.h>

void __attribute__((annotate("clang_nullability_apinotes"))) clang_audited_start() {}
void __attribute__((annotate("clang_nullability_apinotes"))) clang_audited_end() {}

int main() {
    printf("Hello, World!\n");
    
    clang_audited_start();
    // Your audited code goes here.
    clang_audited_end();

    return 0;
}
