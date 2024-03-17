
#include <stdio.h>

int main() {
    alignas(16) int aligned_array[5];
    
    printf("Alignment requirement of the array: %zu\n", _Alignof(aligned_array));
    
    for (size_t i = 0; i < 5; ++i) {
        aligned_array[i] = i + 1;
        printf("%p: %d\n", &aligned_array[i], aligned_array[i]);
    }
    
    return 0;
}
