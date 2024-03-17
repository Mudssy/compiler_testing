
#include <stdio.h>

int main() {
    #ifdef __has_builtin
        if (__has_builtin(__builtin_debugtrap)) {
            __builtin_debugtrap();
        } else {
            printf("Debug trap not supported.\n");
        }
    #else
        printf("Built-in function detection not supported by this compiler.\n");
    #endif
    return 0;
}
