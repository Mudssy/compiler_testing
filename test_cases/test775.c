
#include <stdio.h>

int main() {
    #ifdef ENABLE_PRINT
        printf("Hello World\n");
    #endif
    return 0;
}
