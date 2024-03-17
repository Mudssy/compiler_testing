
#include <stdio.h>

void hello() { printf("Hello from module!\n"); }

// Module definition, exporting the function "hello"
module example 
{
    void hello();
}
