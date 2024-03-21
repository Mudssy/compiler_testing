
#include <stdio.h>

int main() {
    #ifdef _MSC_VER
        printf("Hello from MSVC!\n");
    #else
        printf("Not MSVC!\n");
    #endif
    return 0;
}
