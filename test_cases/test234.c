
#include <stdio.h>

int main() {
    #ifdef __clang__
        #ifndef clanglibLex_test
            #error "clanglibLex section of the compiler is not supported."
        #endif
        printf("Clang libLex test passed.\n");
    #else
        printf("This code is intended to be run with Clang compiler.\n");
    #endif
    
    return 0;
}
