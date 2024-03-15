
#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    printf("Memory Address of the array: %p\n", (void *)array);
    
    for(int i=0; i<5; i++) {
        printf("Element at index %d: %d\n", i, array[i]);
    }
    
    return 0;
}
