
#include <stdio.h>

int main() {
    int x = 10;
    
    __asm__ ( "movl $3, %eax\n" ); // This is inline assembly code for the x86 architecture
    
    printf("The value of x after inline assembly: %d\n", x);
    
    return 0;
}
