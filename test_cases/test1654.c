
#include <stdio.h>

extern int x; // extern variable declaration

void foo(void) {
    x = 20;
}

int main() {
    printf("Value of x before calling foo(): %d\n", x);
    
    foo();
    
    printf("Value of x after calling foo(): %d\n", x);
    
    return 0; // to ensure the program ends.
}
