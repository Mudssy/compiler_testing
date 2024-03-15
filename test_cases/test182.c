
#include <stdio.h>

int main() {
    int32_t alignedVar __attribute__((aligned(16)));
    printf("Address of alignedVar: %p\n", &alignedVar);
    return 0;
}
