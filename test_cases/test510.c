
#include <stdio.h>

int main() {
    #ifdef __clang_major__
        if (__has_feature(safe_stack)) {
            printf("The compiler has support for the safe stack attributes.\n");
        } else {
            printf("The compiler does not have support for the safe stack attributes.\n");
        }
    #else
        printf("This is not a clang compiler.\n");
    #endif

    return 0;
}
