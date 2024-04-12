
#include <stdio.h>

#pragma clang diagnostic ignored "-Wunused-variable"
int main() {
    int x = 10;

    #pragma clang __debug captured
    {
        printf("Test case passed\n");
    }

    return 0;
}
