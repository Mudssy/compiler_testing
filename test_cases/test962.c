
#include <stdio.h>

__attribute__((noinline)) void no_side_effect() { }

int main(void) {
    for (int i = 0; i < 1000000; ++i) {
        no_side_effect();
    }
    
    printf("Hello, world!\n");
    
    return 0;
}
