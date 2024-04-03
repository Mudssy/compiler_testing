
#include <stdlib.h>
#include <assert.h>
#include <stdint.h>  // for uintptr_t

typedef void(*func_ptr)();

void function() {
    exit(0); // Exit successfully
}

int main() {
    func_ptr ptr = &function;
    
    assert((uintptr_t)(&ptr) == (uintptr_t)(&function));
    /* Assert that the pointer to the function is equal to 
       the address of the function itself. */
}
