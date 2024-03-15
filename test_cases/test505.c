
#include <stdio.h>
#include <stdlib.h>
#include <sanitizer/asan_interface.h>

void *global_ptr;

__attribute__((no_sanitize("memory"))) void foo() {
    global_ptr = malloc(10);
}

int main() {
    foo();
    
    if (__asan_address_is_poisoned(global_ptr)) {
        printf("NoSanitizeMemory: Poison memory is detected.\n");
    } else {
        printf("NoSanitizeMemory: Poison memory is not detected.\n");
    }
    
    free(global_ptr);
    return 0;
}
