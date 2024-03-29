
#include <stdio.h>

int main() {
    // Define an unsigned integer with value 1
    unsigned int num = 1;

    // Shift the bits of num one place to the left, effectively multiplying its value by 2
    unsigned int shifted = num << 1;

    printf("Original number: %u\n", num);
    printf("Shifted number: %u\n", shifted);

    return 0;
}
