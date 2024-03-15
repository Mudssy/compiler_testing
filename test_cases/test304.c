
#include <stdio.h>

int main() {
    #ifdef __APPLE__
        printf("This binary is fat or universal.\n");
    #else
        printf("This binary is not fat or universal.\n");
    #endif
    
    return 0;
}
