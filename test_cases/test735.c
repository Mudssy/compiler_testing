
#include <stdio.h>

void __attribute__((alias("target"))) target_function() { printf("Inside Target Function\n"); }

void __attribute__((noinline)) test_function1() { target_function(); }

int main(void) 
{
    test_function1();
    return 0;
}
