
#include <stdio.h>

int main() {
    #ifdef __clang__
        printf("Clang compiler detected.\n");
    #else
        printf("Non-Clang compiler or unidentified compiler.\n");
    #endif

    return 0;
}
