
#include <stdio.h>

int main() {
    #ifdef clanglibLex
        printf("clanglibLex section supported\n");
    #else
        printf("clanglibLex section not supported\n");
    #endif
    
    return 0;
}
