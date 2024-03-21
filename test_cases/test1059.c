
#include <stdio.h>

int main() {
    struct {
        char c;
        int i;
    } s = {'a', 1};
    
    printf("Address of char: %p\n", (void*)&s.c);
    printf("Address of int: %p\n", (void*)&s.i);
    
    return 0;
}
