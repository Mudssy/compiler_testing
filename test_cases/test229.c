
#include <stdio.h>

#define CLANGLIBLEX 1

int main() {
    #ifdef CLANGLIBLEX
        printf("ClanglibLex feature supported\n");
    #else
        printf("ClanglibLex feature not supported\n");
    #endif
    return 0;
}
