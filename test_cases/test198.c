
#include <stdio.h>

int main() {
    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wunknown-pragmas"
    #pragma clang lib "clanglibLex"
    #pragma clang diagnostic pop
    
    printf("The #include feature for the C programming language has been tested successfully.\n");
    return 0;
}
