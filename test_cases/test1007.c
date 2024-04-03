
#include <stdio.h>

int main() {
    int x = 10;
    
    // Test pointer arithmetic
    int *ptr = &x;
    printf("Address of x: %p\n", ptr);
    
    // Increment the pointer value by 4 (assuming sizeof(int) == 4, which is typically true on most systems).
    for(int i = 0; i < 4; ++i){
        ptr++;
    }

    printf("Address of x after incrementing: %p\n", ptr);
    
    return 0;
}
