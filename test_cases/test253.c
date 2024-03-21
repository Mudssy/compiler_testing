
#include <stdio.h>

int main() {
    struct alignas(8) AlignStruct {
        char c;
        int i;
    } s;
    
    printf("Alignment of the structure: %zu\n", alignof(s));
    if (alignof(s) == 8) {
        printf("alignas works as expected.\n");
    } else {
        printf("alignas does not work as expected.\n");
    }
    
    return 0;
}
