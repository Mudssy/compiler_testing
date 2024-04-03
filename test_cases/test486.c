
#include <stdio.h>

void foo(void) { }

int main(void) 
{
    foo(); // Calling deprecated function to suppress warning
    
    #pragma GCC error "This function is deprecated"
    
    return 0;
}
