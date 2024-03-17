
#include <stdio.h>

int main() {
    int result = 0;

    // Empty class body formatting feature test
    struct EmptyClass {
    };
    struct EmptyClass emptyClassInstance;
    result += sizeof(emptyClassInstance);

    printf("Result: %d\n", result);

    return 0;
}
