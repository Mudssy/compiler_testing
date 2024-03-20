
#include <stdio.h>

// Global variable with specific alignment requirement
__attribute__ ((aligned (16))) char alignedVar[4];
char unalignedVar[5] = {'H', 'e', 'l', 'l', 'o'};

int main() {
    if(((unsigned long)alignedVar & 0xf) == 0){
        printf("Aligned");
    }else{
        printf("Unaligned");
    }
    
    return 0; // Make sure this program does not run forever
}
