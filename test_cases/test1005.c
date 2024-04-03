
#include <stdio.h>

void function() {
    printf("This program does not use trailing return type breaking feature for the C programming language.\n");
}

int main() {
    void (*fun)() = &function; // declare a function pointer to function 'function'
    fun(); // call the function through the pointer
    return 0;
}
