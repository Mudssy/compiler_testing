
#include <stdio.h>

int main() {
    #ifdef __clang_major__
        printf("This is Clang with major version %d\n", __clang_major__);
    #else
        printf("Not using clang compiler.\n");
    #endif
    
    return 0;
}
