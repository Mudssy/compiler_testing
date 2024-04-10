
#include <stdint.h>
#include <stdio.h>

void swap(uint8_t *a, uint8_t *b) {
    uint8_t temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    uint8_t a = 10;
    uint8_t b = 20;
    
    printf("Before Swap: a = %" PRIu8 ", b = %" PRIu8 "\n", a, b);
    swap(&a, &b);
    printf("After Swap: a = %" PRIu8 ", b = %" PRIu8 "\n", a, b);
    
    return 0;
}
