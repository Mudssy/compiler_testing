
#include <stdio.h>

int main() {
    printf("This program is compiled with %s on %s\n", 
           __clang_version__, __DATE__);

    // Example code for cross-compilation targets feature
    if (sizeof(void*) == 4) {
        printf("Target architecture: 32 bit\n");
    } else if (sizeof(void*) == 8) {
        printf("Target architecture: 64 bit\n");
    } else {
        printf("Unknown target architecture\n");
    }
    
    return 0;
}
