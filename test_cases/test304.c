
#include <stdio.h>

int main() {
    #if defined(__APPLE__) && defined(__MACH__)
        printf("Running on Apple platform.\n");
    #else
        printf("Not running on Apple platform.\n");
    #endif
    
    return 0;
}
