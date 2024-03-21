
#include <stdio.h>

int main() {
    double d = 0x1.fep+3; // Hexadecimal for 1*2^(5/16)
    
    printf("Hexadecimal floating-point number: %a\n", d);
    return 0;
}
