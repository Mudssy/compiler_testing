
#include <stdio.h>

int main() {
    int a = 1 << 32; // shifting 32 bits to left, which is out of the range for an integer in C
    printf("Value: %d", a);
    return 0;
}
