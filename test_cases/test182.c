
#include <stdio.h>

int main() {
    int arr[4];
    printf("Address of first element: %p\n", (void*)&arr[0]);
    printf("Aligned address: %p\n", (void*)((((size_t)&arr[0]) + 15UL) & ~15UL));
    
    if(((size_t)&arr[0]) == (((size_t)&arr[0]) & ~15UL)) {
        printf("Address is aligned\n"); 
    } else {
        printf("Address is not aligned\n"); 
    }

    return 0;
}
