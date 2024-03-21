
#include <stdio.h>

int __llvm_libc_start_main(void (*main)(void)) {
    printf("The __llvm_libc_start_main function is supported!\n");
    main(); // Call the original main() function
    return 0; // Return to prevent infinite recursion
}

int main(void) {
    __llvm_libc_start_main(&main);
    printf("The `__llvm_libc_start_main` pragma directive is supported!\n");
    return 0;
}
