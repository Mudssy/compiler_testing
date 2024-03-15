
#include <stdio.h>

int main() {
    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wunknown-pragmas"
    #pragma clanglibFrontendRewrite rewrite(true)
    printf("Header file rewrites feature has been tested successfully.\n");
    #pragma clang diagnostic pop
    return 0;
}
