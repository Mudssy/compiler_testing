
#include <stdio.h>

__attribute__((noinline)) void foo() { printf("Hello, World!\n"); }

int main(void) 
{
    int i;
    for (i = 0; i < 10; ++i) 
    {
        foo();
    }
    
    return 0;
}
