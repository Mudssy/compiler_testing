
#include <stdio.h>

void __llvm_libc_start_main(void (*main)(void));

int main(void) {
    printf("The `__llvm_libc_start_main` pragma directive is supported!\n");
    return 0;
}
