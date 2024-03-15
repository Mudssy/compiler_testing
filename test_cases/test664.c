
#include <stdio.h>

int main() {
    int x = 5;
    #pragma clang libFrontend(Rewrite)
    // A simple transformation: swap the operands of a binary operation.
    if (x + 3 > 8) {
        printf("The result is true.\n");
    } else {
        printf("The result is false.\n");
    }
    return 0;
}
