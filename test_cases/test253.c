
#include <stdio.h>

int main() {
    typedef struct {
        char c;
        int i;
    } __attribute__((aligned(8))) AlignStruct; // aligned at 8 bytes boundary
    
    printf("Alignment of the structure: %zu\n", __alignof__(AlignStruct));
    if (__alignof__(AlignStruct) == 8) {
        printf("alignas works!\n");
    } else {
        printf("alignas doesn't work!\n");
    }
    
    return 0;
}
