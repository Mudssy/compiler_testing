
#include <stdio.h>

void __attribute__((noinline)) my_function() {
    printf("Called from function entry point\n");
}

int main() {
    printf("Main function start\n");
    #ifdef __llvmlibProfileData__
        printf("llvmlibProfileData section exists\n");
        my_function();
    #else
        printf("llvmlibProfileData section does not exist\n");
    #endif
    printf("Main function end\n");
    return 0;
}
