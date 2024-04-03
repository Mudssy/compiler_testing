
#include <stdio.h>
#include <inttypes.h>

void swap(uint8_t *a, uint8_t *b)
{
    asm ( "mov %rdi, %rax\n" // move value of a into rax
          "mov %rsi, %rdi\n" // move value of b into rdi
          "mov %rax, %rsi\n" // move value of a back to b (swap) 
        : "=r"(a), "=r"(b)
        : "%rax", "%rdi" );
}

int main() {
    uint8_t a = 0x12;
    uint8_t b = 0x34;
    
    printf("Before Swap: a = %" PRIu8 ", b = %" PRIu8 "\n", a, b);
    swap(&a, &b);
    printf("After Swap: a = %" PRIu8 ", b = %" PRIu8 "\n", a, b);
    
    return 0;
}
