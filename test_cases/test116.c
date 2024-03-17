
#include <stdio.h>

int x = 10; // Global variable

void func() {
    printf("Value of x is %d\n", x); 
}

int main(void) {
    func(); // Calling function with global variable
    return 0;
}
