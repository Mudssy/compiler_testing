
#include <stdio.h>

int main() {
    #pragma clang diagnostic error "-Wunused-variable"
    int unusedVar = 0;
    printf("This program will generate an error due to the use of an unused variable.\n");
    return 0;
}
