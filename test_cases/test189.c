
#include <stdio.h>

void foo() {        // The function was made non-inline
    printf("Function\n");
}

int main() {
    int bar = 10;   // Variable declaration is not inline
    printf("%d\n", bar);
    foo();          
    return 0;      
}
