
#include <stdio.h>

int main() {
    int i = 1;  // Start with an unaligned integer
    printf("Address of i before alignment: %p\n", (void*)&i);
    
    // Align consecutive assignments
    char __attribute__((aligned(32))) a[4];
    double __attribute__((aligned(64))) d;

    printf("Address of a after alignment: %p\n", (void*)&a);
    printf("Address of d after alignment: %p\n", (void*)&d);
    
    return 0;  // This ensures that the program returns, not running forever
}
