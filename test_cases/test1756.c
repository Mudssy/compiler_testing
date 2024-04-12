
#include <stdio.h>

// C function declaration
void foo();

int main() {
    // Call extern "C" function from the same translation unit
    foo();
    
    printf("The program has run successfully\n");
    return 0;
}
