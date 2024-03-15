
#include <stdio.h>

int main() {
    _Pragma("clang diagnostic push")
    _Pragma("clang diagnostic ignored \"-Wdeprecated-declarations\"")
    printf("Clang _Pragma operator support test\n");
    _Pragma("clang diagnostic pop")
    return 0;
}
