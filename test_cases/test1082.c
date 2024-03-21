
#include <stdio.h>

int main() {
    typedef struct { char x; long long y; } foo;
    printf("Maximum alignment requirement of any scalar type: %zu\n", _Alignof(max_align_t));
    
    // Here we align our 'foo' struct to the maximum allowed alignment
    alignas(_Alignof(max_align_t)) foo var;
    printf("Alignment requirement of the struct: %zu\n", _Alignof(var));
    
    return 0;
}
