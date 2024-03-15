
#include <stdio.h>

#define CONCAT(a, b) a ## b

int main() {
    int CONCAT(var, 1) = 42;
    printf("Value of var1: %d\n", var1);
    
    return 0;
}
