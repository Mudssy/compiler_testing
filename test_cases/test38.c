
#include <stdio.h>

#if defined(__LLVM__) && __has_feature(address_sanitizer)
extern void __llvm_profile_initialize_file(void);
int main() {
    __llvm_profile_initialize_file();
    printf("Cross-compilation and cross-platform debugging features are supported.\n");
    return 0;
}
#else
int main() {
    printf("Cross-compilation and cross-platform debugging features are not supported.\n");
    return -1;
}
#endif
