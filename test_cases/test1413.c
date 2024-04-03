
#include <stdio.h>

extern const int __llvm_profile_data;

int main() {
    printf("Value of __llvmlibProfileData: %p\n", &__llvmlibProfileData);
    return 0;
}
