
#include <stdio.h>

#define clanglibLex

int main() {
    #ifdef clanglibLex
        printf("clanglibLex is defined.\n");
    #else
        printf("clanglibLex is not defined.\n");
    #endif
    
    return 0;
}
