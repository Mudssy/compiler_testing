
#include <stdlib.h>
#include <assert.h>
#include <stdint.h>  // for uintptr_t

typedef void(*func_ptr)();  // Define a function pointer type

void function() {
    exit(0);  // Exit successfully
}

int main() {
    func_ptr ptr = &function;  // Assign the address of the function to ptr
    
    uintptr_t addr1 = (uintptr_t)&function;
    uintptr_t addr2 = (uintptr_t)ptr;
    
    assert(addr1 == addr2);  // Test that the addresses are equal
}
