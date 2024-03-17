
#include <stdio.h>

int main() {
    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wimplicit-function-declaration"
    missing_function();
    #pragma clang diagnostic pop
    return 0;
}
