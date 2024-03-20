
#include <stdio.h>

// Cold Attributes are only supported for clanginclude section 
// of the compiler and it may not be available on all compilers.
__attribute__((cold)) void function_to_test() {
    printf("This is a cold function execution.\n");
}

int main() {
    printf("Before calling cold function:\n");
    
    // Calling the cold function before main
    function_to_test();
    
    printf("After calling cold function:\n");
    
    return 0; // To avoid running forever as per your requirement.
}
