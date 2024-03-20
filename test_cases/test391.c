
#include <stdio.h>

int main() {
    #ifdef __clang__  // This checks if we are using the Clang compiler
        printf("We are using the Clang compiler.\n");
    #else
        printf("We are not using the Clang compiler.\n");
    #endif
    
    return 0;
}
