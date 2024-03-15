
#include <stdio.h>

int main() {
    #ifdef __clang__
        printf("Clang compiler detected.\n");
        #if __has_extension(c_generic_selections)
            printf("Language extension 'c_generic_selections' is enabled.\n");
        #else
            printf("Language extension 'c_generic_selections' is disabled.\n");
        #endif
    #else
        printf("Non-clang compiler detected.\n");
    #endif
    return 0;
}
