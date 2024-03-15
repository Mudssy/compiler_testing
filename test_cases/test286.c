
#include <stdio.h>

int main() {
    #pragma clang diagnostic push
    #pragma clang diagnostic error "-Wunknown-pragmas"
    #pragma clang coverage mapping on
        printf("Coverage Mapping is ON.\n");
    #pragma clang coverage mapping off
    #pragma clang diagnostic pop
    
    return 0;
}
