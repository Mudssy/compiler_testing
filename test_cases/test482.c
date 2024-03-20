
#include <stdio.h>
#include <stdlib.h>

// The _Noreturn keyword specifies that a function does not return to its caller after execution.
void print_and_exit() __attribute__((noreturn));

void print_and_exit() {
    printf("Hello World\n");
    exit(0);  // This stops program execution.
}

int main(){
    print_and_exit();
    return 0;  // We should never reach this line because of the noreturn attribute.
}
