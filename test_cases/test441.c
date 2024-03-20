
#include <stdio.h>

// The Type Attributes feature for the C programming language 
// can be tested using attribute syntax in clang, gcc and some other compilers
// This example tests the 'cleanup' attribute which allows a function to be run when an exception leaves it
// It also uses 'alloc_size', which is a type-attribute that can provide information about memory allocation size

void cleanup_func(int *ptr) {
    free(ptr);
}

int main() {
    int *p __attribute__((cleanup(cleanup_func))) = malloc(100 * sizeof(*p));
    
    // Use the alloc_size attribute to print out the size of memory allocation
    printf("Memory allocated: %zu bytes\n", __builtin_object_size(p, 0));

    return 0;
}
