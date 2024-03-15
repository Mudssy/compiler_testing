
#include <stdio.h>

_Static_assert(1, "Compile time assertion failed.");

int main() {
    printf("Static assert feature is working correctly.\n");
    return 0;
}
