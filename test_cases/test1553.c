
#include <stdio.h>

int main() {
#ifdef __clang__
    printf("Hello from compiler1\n");
#elif defined(__GNUC__)
    printf("Hello from compiler2\n");
#else
    printf("Unknown compiler\n");
#endif
    return 0;
}
