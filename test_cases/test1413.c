
#include <stdio.h>

extern const int __llvm_profile_data;

int main() {
    printf("Value of __llvm_profile_data: %p\n", &__llvm_profile_data);
    return 0;
}
