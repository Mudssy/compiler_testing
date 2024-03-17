
#include <stdio.h>

int main() {
    float a = 0x1p0;  // this should produce 1.0 in decimal representation
    float b = 0x1.2p3; // this should produce 9.0 in decimal representation

    printf("a = %f\n", a);
    printf("b = %f\n", b);

    return 0;
}
