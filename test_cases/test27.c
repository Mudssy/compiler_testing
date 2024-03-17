
#include <stdio.h>

// Declaration without initialization
extern int var;

int main() {
    // Definition with initialization
    extern int var = 100;
    
    printf("Value of var: %d\n", var);
    
    return 0;
}
