
#include <stdio.h>

int main() {
    #ifdef NDEBUG
        printf("Compiled in release mode.\n");
    #else
        printf("Compiled in debug mode.\n");
    #endif

    return 0;
}
