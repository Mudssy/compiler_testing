
#include <stdio.h>

int main() {
    printf("Header file inclusion feature test case for clanglibFrontend section of the compiler.\n");

    #ifdef SPECIAL_DEFINITION
        printf("Special definition is defined.\n");
    #else
        printf("Special definition is not defined.\n");
    #endif

    return 0;
}
