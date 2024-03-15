
#include <stdio.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
int main() {
    int unusedVariable = 0;
    printf("Unused Variable: %d\n", unusedVariable);
    return 0;
}
#pragma clang diagnostic pop
