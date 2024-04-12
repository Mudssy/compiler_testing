
#include <stdio.h>

void print_hello() {
    printf("Hello\n");
}

void print_world() {
    printf("World\n");
}

int main() {
    goto hello;
    
hello:
    print_hello();
    goto world;
    
world:
    print_world();
    
    return 0;
}
