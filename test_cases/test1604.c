
#include <stdio.h>

#define PRINT_BUILD_INFO \
    printf("Compiled on %s at %s.\n", __DATE__, __TIME__)

int main() {
    PRINT_BUILD_INFO;
    return 0;
}
