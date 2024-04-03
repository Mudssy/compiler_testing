
#include <stdio.h>

void print_vec(const void* vec, size_t count, size_t size) {
    const char *ptr = (const char*)vec; // this is fine as long as vec points to a proper object type
    
    for(size_t i = 0; i < count; ++i) {
        switch(size) {
            case sizeof(int): {// braces added here to define a new scope 
                int value = *((int*)(ptr + i * size)); // directly assign the dereferenced pointer to an integer variable
                printf("%d ", value); 
                break;
            }
            case sizeof(float): {
                float value = *((float*)(ptr + i * size)); // directly assign the dereferenced pointer to a float variable
                printf("%.2f ", value); 
                break;
            }
            // add other cases as needed...
        }
    }
    printf("\n");
}

int main() {
    int ivec[] = {1, 2, 3};
    float fvec[] = {1.0f, 2.0f, 3.0f};
    
    print_vec(ivec, sizeof(ivec) / sizeof(*ivec), sizeof(*ivec)); // no need to pass the element size explicitly
    print_vec(fvec, sizeof(fvec) / sizeof(*fvec), sizeof(*fvec)); 
    
    return 0;
}
