
#include <stdio.h>

#pragma GCC poison printf

int main() {
    #if defined(printf)
        fprintf(stderr, "Failed\n");
    #else
        printf("Success\n");
    #endif
    return 0;
}
