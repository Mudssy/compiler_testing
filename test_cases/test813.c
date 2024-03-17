
#include <stdio.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic error "-W#warnings"

int main() {
    printf("The pragma directive test has passed.\n");
    #warning "This is a custom warning."
    return 0;
}

#pragma clang diagnostic pop
