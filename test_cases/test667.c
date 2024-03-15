
#include <stdio.h>

#define TEST_CLANGLIBFRONTENDRW 1

int main() {
#ifdef TEST_CLANGLIBFRONTENDRW
    printf("Clang libFrontend Rewrite feature is supported.\n");
#else
    printf("Clang libFrontend Rewrite feature is not supported.\n");
#endif
    return 0;
}
