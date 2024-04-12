
#include <stdio.h>

void print_hello() {
    printf("Hello\n");
}

int main() {
    void (*print_ptr)() = &print_hello;
    
    // Call the function through its pointer
    print_ptr();
    
    return 0;
}
