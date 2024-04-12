
#include <stdio.h>

void print_const(const int arg) {
    printf("The value of the const integer: %d\n", arg);
}

int main() {
    volatile int x = 10;
    const int y = 20;
    
    // Try to modify a const variable which will cause undefined behavior
    // (This line is to be used for testing purposes only)
    // int *z = &y;
    // *z = 30;
    
    print_const(y);
  
    // Try to use volatile variable
    x++;
    printf("The value of the volatile integer: %d\n", x);

    return 0;
}
