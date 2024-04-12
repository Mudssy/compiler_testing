
#include <stdio.h>

void print_hello() {
    printf("Hello World\n");
}

int main(void) {
    void (*print_ptr)(void) = &print_hello;  // Function pointer assignment
    
    // Invoke function through pointer
    print_ptr();
    
    return 0;   // Ensure the program returns
}
