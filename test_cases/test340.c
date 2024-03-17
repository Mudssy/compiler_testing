
#include <stdio.h>

int main(void) {
    int a[4] = {10, 20, 30, 40};
    int mask[4] = {3, 2, 1, 0}; // Mask for the permutation (reversing vector)
    
    __attribute__((noinline)) void *foo(__builtin_shufflevector(a, a, mask));
    
    printf("Vector reversed: {%d, %d, %d, %d}\n", 
        ((int*)(void*)&foo)[0], // Getting output from the vector (for checking)
        ((int*)(void*)&foo)[1], 
        ((int*)(void*)&foo)[2], 
        ((int*)(void*)&foo)[3]);
    
    return 0;
}
