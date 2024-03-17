
#include <stdio.h>

int main(void) {
    #ifdef __clang__
        printf("Tool chain selection feature for the C programming language is supported by clanglibDriver section of the compiler.\n");
    #else
        printf("Tool chain selection feature for the C programming language is not supported by clanglibDriver section of the compiler.\n");
    #endif
  
    return 0;
}
